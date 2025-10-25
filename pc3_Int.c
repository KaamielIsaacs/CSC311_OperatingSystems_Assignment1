#include <stdio.h>

int main() {
    int i = 10;
    int *ip = &i;

    printf("ip   = 0x%08x (Before adding 1)\n", (unsigned int)ip);
    ip = ip + 1;  // Move to the next int
    printf("ip+1 = 0x%08x (After adding 1)\n", (unsigned int)ip);
    printf("Size of int: %ld bytes\n", (long)ip - (long)&i);

    return 0;
}
