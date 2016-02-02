
#include <stdio.h>
#include <dlfcn.h>

int main(int argc, char **argv)
{
    void *handle;      /* handle for dynamic object */
    void (*hi)();   /* function pointer for symbol */

    handle = dlopen("hello.so", RTLD_LAZY);
    if (!handle) {
        fprintf(stderr," dlopen() failure:\n %s\n",dlerror());
        return 1;
    }
    hi = (void (*)()) dlsym(handle,"hello");
    (*hi)();

    dlclose(handle);

    return 0;
}
