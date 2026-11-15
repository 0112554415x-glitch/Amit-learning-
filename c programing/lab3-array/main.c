/*1 -Write a C Function that take an array and its size,
return the max number
2-Write a C Function that take an array and its size,
return the min number.

 ���� ���� �� ���� ��� ������ Max
 ���� ���� �� ���� ��� ������ Min */



#include <stdio.h>
#include <stdlib.h>

// Function to find the maximum number
int findMax(int arr[], int size)
{
    int max = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    return max;
}

// Function to find the minimum number
int findMin(int arr[], int size)
{
    int min = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    return min;
}

int main()
{
    int numbers[10];

    for (int i = 0; i < 10; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    printf("Maximum number = %d\n", findMax(numbers, 10));
    printf("Minimum number = %d\n", findMin(numbers, 10));

    return 0;
}
