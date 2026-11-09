#include <stdio.h>
#include <stdlib.h>

int main()
{
 int number;

    printf("enter the number\n");
    scanf("%d", &number);

    printf("the number is odd = %d\n" , number & 1);
    printf("the number is even = %d\n" , !(number &1));
    return 0;
}