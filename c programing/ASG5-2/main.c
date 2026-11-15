//Write a program to Reverse Array without Using another Array

#include <stdio.h>


int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int temp;

    printf("Original array: ");

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    // Reverse the array
    for (int i = 0; i < 5 / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[4 - i];
        arr[4 - i] = temp;
    }

    printf("\nReverse array: ");

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
