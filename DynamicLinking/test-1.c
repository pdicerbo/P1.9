#include <dlfcn.h>

int main(int argc, char** argv){
  void* handle;
  void (*h1)();
  void (*h2)(char*);
  
  handle = dlopen("./hello.so", RTLD_LAZY);
  if(handle){
    h1 = (void (*)()) dlsym(handle,"hello");
    (*h1)();

    h2 = (void (*)(char*)) dlsym(handle,"char_hello");
    (*h2)(argv[0]);
    dlclose(handle);
  }
  return 0;
}
