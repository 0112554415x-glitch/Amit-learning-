#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int num;
    printf("enter an 8-bit number(0-2550):");
    scanf("%u", &num);
    num = num | 3;

    printf(" result = %u\n", num);

    return 0;
}