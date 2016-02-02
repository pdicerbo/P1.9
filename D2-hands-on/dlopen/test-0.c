
#include <stdio.h>

void hello(void)
{
    puts("Hello, World!");
}

int main(int argc, char **argv)
{
    void (*hi)();   /* function pointer for symbol */

    hi = &hello;
    (*hi)();

    return 0;
}

