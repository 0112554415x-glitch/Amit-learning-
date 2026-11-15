/*Write a program in C that performs the following steps:
1. Prompts the user to enter 10 integer numbers.
2. Calculates the average of these numbers.
3. Displays the result (the average) to the user.*/


#include <stdio.h>

int main()
{
    int numbers[10];
    int sum = 0;
    float average;

    for (int i = 0; i < 10; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);

        sum = sum + numbers[i];
    }

    average = (float)sum / 10;

    printf("Average = %.2f\n", average);

    return 0;
}

