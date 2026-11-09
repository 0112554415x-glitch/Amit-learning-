#include <stdio.h>

int main(void)
{
    unsigned int number;
    int count = 0;

    printf("Enter a number: ");
    scanf("%u", &number);

    while (number > 0)
    {
        if (number & 1)
        {
            count++;
        }

        number = number >> 1;
    }

    printf("Number of ones = %d\n", count);

    return 0;
}