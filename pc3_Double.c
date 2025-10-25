#include <stdio.h>

int main() {
    double d = 3.14;
    double *dp = &d;

    printf("dp   = 0x%08x (Before adding 1)\n", (unsigned int)dp);
    dp = dp + 1;  // Move to the next double
    printf("dp+1 = 0x%08x (After adding 1)\n", (unsigned int)dp);
    printf("Size of double: %ld bytes\n", (long)dp - (long)&d);

    return 0;
}
