/* Write a program in C that performs the following steps:
1.Prompts the user to enter 10 integer numbers.
2.Finds the largest and smallest numbers in the array.
3.Displays the largest number and the smallest number to the user*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numbers[10];
    int largest, smallest;

    for (int i = 0; i < 10; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    largest = numbers[0];
    smallest = numbers[0];

    for (int i = 1; i < 10; i++)
    {
        if (numbers[i] > largest)
        {
            largest = numbers[i];
        }

        if (numbers[i] < smallest)
        {
            smallest = numbers[i];
        }
    }

    printf("Largest number = %d\n", largest);
    printf("Smallest number = %d\n", smallest);

    return 0;
}
