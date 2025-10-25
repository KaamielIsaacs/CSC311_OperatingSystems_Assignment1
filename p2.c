#include <stdio.h>

void foo1(int xval) {
    int x;
    x = xval;
    printf("In foo1: Address of x = 0x%x, Value of x = %d\n", (unsigned int)&x, x);
}

void foo2(int dummy) {
    int y;
    printf("In foo2: Address of y = 0x%x, Value of y = %d\n", (unsigned int)&y, y);
}

int main() {
    foo1(7);
    foo2(11);
    return 0;
}
