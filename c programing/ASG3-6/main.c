/*ASG-3-1: implement a program that takes from user two numbers and pass them to avoid function called swap .
this function receive the two numbers in two variables x and y and print the two variables then swap their
values and print x and y again after swapping
*/
#include <stdio.h>

void swap(int x, int y)
{
    printf("befor swapping\n");
    printf("x = %d    y = %d\n", x, y);

    x = x + y;
    y = x - y;
    x = x - y;

    printf("after swapping\n");
    printf("x = %d    y = %d\n", x, y);
}

int main()
{
    int num1, num2;

    printf("Enter first number\n");
    scanf("%d", &num1);

    printf("Enter second number\n");
    scanf("%d", &num2);

    swap(num1, num2);

    return 0;
}