#include <stdio.h>

void hello(){
  /* printf("\n\tHello World\n"); */
  puts("\n\tHello World\n");
}

int sum_num(int a, int b){
  int c = a + b;
  printf("\n\tthe sum of %d and %d is %d\n", a, b, c);
  return c;
}

void char_hello(char* mychar){
  printf("\n\tIn char_hello function:\n\t%s\n", mychar);
}
