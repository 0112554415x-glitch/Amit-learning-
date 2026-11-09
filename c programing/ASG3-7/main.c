//Write a program to Display Fibonacci Sequence Using the Recursion Method and iterative Method
#include <stdio.h>

// 1. function with Recursion
int fibRecursion(int n)
{
    if (n <= 1)
        return n;
    else
        return fibRecursion(n - 1) + fibRecursion(n - 2);
}

// 2. function with Iterative
void fibIterative(int n)
{
    int first = 0, second = 1, next, i;

    for (i = 0; i < n; i++)
    {
        if (i <= 1)
            next = i;
        else
        {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d, ", next);
    }
}

int main()
{
    int terms, i;

    printf("Enter the number of terms: ");
    scanf("%d", &terms);

    // Print with  Iterative
    printf("Fibonacci Series Using Iterative Method: ");
    fibIterative(terms);
    printf("\n");

    // print with  Recursion
    printf("Fibonacci Series Using Recursion Method: ");
    for (i = 0; i < terms; i++)
    {
        printf("%d, ", fibRecursion(i));
    }
    printf("\n");

    return 0;
}