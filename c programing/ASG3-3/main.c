#include <stdio.h>

unsigned int add(unsigned char a, unsigned char b)
{
    return a + b;
}

int main(void)
{
    unsigned char num1, num2;
    unsigned int result;

    printf("Enter two numbers: ");
    scanf("%hhu %hhu", &num1, &num2);

    result = add(num1, num2);

    printf("Sum = %u\n", result);

    return 0;
}