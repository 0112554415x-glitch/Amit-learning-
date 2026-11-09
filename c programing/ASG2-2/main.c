#include <stdio.h>

int main(void)
{
    int number, original, temp;
    int digit, count = 1;
    int sum = 0, power;

    printf("Enter the number: ");
    scanf("%d", &number);

    original = number;
    temp = number;


    while (temp >= 10)
    {
        count++;
        temp = temp / 10;
    }

    temp = number;


    while (temp > 0)
    {
        digit = temp % 10;

        power = 1;

        for (int i = 1; i <= count; i++)
        {
            power = power * digit;
        }

        sum = sum + power;

        temp = temp / 10;
    }

    if (sum == original)
    {
        printf("Armstrong Number");
    }
    else
    {
        printf("Not Armstrong Number");
    }

    return 0;
}