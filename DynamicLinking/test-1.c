#include <dlfcn.h>

int main(int argc, char** argv){
  void* handle;
  void (*h1)();
  
  handle = dlopen("./hello.so", RTLD_LAZY);
  if(handle){
    h1 = (void (*)()) dlsym(handle,"hello");
    (*h1)();
    dlclose(handle);
  }
  return 0;
}
