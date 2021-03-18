#include<stdio.h>

int main() {

    int a = 0;
    int b = 0;
    int c = 0;

    printf("Hello world\n");

    __asm__ __volatile__(
        "mov $2, %%eax;"
        "mov %%eax, %0;"
        "mov $10, %%ebx;"
        "mov %%ebx, %1"
        : "=m" (a), "=m" (c)
    );


    __asm__ __volatile__(
        "mov $5, %%ebx;"
        "mov %%ebx, %0"
        : "=m" (b)
    );

    printf("Result(a) : %d\n", a);
    printf("Result(c) : %d\n", c);
    printf("Result(b) : %d\n", b);


    int src = 3;
    int dst = 5;
    __asm__ volatile (
        "mov %1, %%eax;"
        "add $1, %%eax;"
        "mov %%eax, %0;"
        : "=m" (dst)
        : "m" (src)
    );

    printf("Result(add) : %d\n", dst);
    return 0;
}
