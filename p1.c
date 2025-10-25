#include <stdio.h>

int main() {

    double d = 1.2345;
    int i = 55;
    char c = 'A';
    
    double *pd = &d;
    int *pi = &i;
    char *pc = &c;
    
    printf("Variable d: Address = 0x%x, Value = %lf, Size = %lu bytes\n", (unsigned int)&d, d, sizeof(d));
    printf("Pointer pd: Address = 0x%x, Value = 0x%x, Size = %lu bytes\n\n", (unsigned int)&pd, (unsigned int)pd, sizeof(pd));
    
    printf("Variable i: Address = 0x%x, Value = %d, Size = %lu bytes\n", (unsigned int)&i, i, sizeof(i));
    printf("Pointer pi: Address = 0x%x, Value = 0x%x, Size = %lu bytes\n\n", (unsigned int)&pi, (unsigned int)pi, sizeof(pi));
    
    printf("Variable c: Address = 0x%x, Value = %c, Size = %lu bytes\n", (unsigned int)&c, c, sizeof(c));
    printf("Pointer pc: Address = 0x%x, Value = 0x%x, Size = %lu bytes\n", (unsigned int)&pc, (unsigned int)pc, sizeof(pc));
    
    return 0;
}
