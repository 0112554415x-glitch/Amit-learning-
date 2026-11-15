 /*Write a program that ask the user to enter 5 numbers and store it in array called arr_1 using for loop
Then print the following:

- Print the 5 elements of arr_1
- The maximum number in arr_1 and its position in array
- The minimum number in arr_1 and its position in array */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr_1[5];
    int max, min;
    int maxPosition, minPosition;


    for (int i = 0; i < 5; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &arr_1[i]);
    }

    printf("\nArray elements: ");

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr_1[i]);
    }

    // Initialize max and min
    max = arr_1[0];
    min = arr_1[0];

    maxPosition = 0;
    minPosition = 0;

    // Find maximum and minimum
    for (int i = 1; i < 5; i++)
    {
        if (arr_1[i] > max)
        {
            max = arr_1[i];
            maxPosition = i;
        }

        if (arr_1[i] < min)
        {
            min = arr_1[i];
            minPosition = i;
        }
    }

    printf("\nMaximum number = %d", max);
    printf("\nMaximum position = %d", maxPosition);

    printf("\nMinimum number = %d", min);
    printf("\nMinimum position = %d\n", minPosition);

    return 0;
}
