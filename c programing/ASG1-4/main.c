#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num ,  k ;
    printf("enter a number:");
    scanf("%d", &num);

    printf("enter bit postion :");
    scanf(" %d", &k);



    num = num ^(1 <<k);
    printf(" result = %d",num);
    return 0;
}