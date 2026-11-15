 /* Write a program that ask you to enter a value of a variable int x.
Pass the address of x to a function called edit.
Increment the value of x by 1 inside the function.
Print the value of x in the main function before and after calling the function edit.*/


#include <stdio.h>
#include <stdlib.h>

void edit(int *ptr)
{
    *ptr = *ptr + 1;
}

int main()
{
    int x;

    printf("Enter the value of x: ");
    scanf("%d", &x);

    printf("Before calling edit x = %d\n", x);

    edit(&x);

    printf("After calling edit x = %d\n", x);

    return 0;
}
