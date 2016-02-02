#include <stdio.h>

void hello(){
  /* printf("\n\tHello World\n"); */
  puts("\n\tHello World\n");
}

int main(int argc, char** argv){
  void (*h1)();

  h1 = &hello;
  printf("\n\tCalling hello()");

  h1();
  
  return 0;
}
