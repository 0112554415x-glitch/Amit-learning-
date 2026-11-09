#include <stdio.h>
#include <stdlib.h>

int main()
{
    char  operator;
    float number_1 , number_2 , result;


    printf(" enter number_1 :");
    scanf("%f", &number_1);


     printf("enter operator (+,-,*,/):");
     scanf(" %c", &operator);


    printf(" enter number_2 :");
    scanf(" %f", &number_2);


    if (operator == '+')
    {
        result= number_1 + number_2;
    printf(" the result = %.2f \n" , result);
    }

    else if (operator == '-')
    {
        result= number_1 - number_2;
    printf(" the result = %.2f \n" , result);
    }
    else if (operator == '*')
    {
              result= number_1 * number_2;
    printf(" the result = %.2f \n" , result);
    }

    else if (operator == '/')
    {

        if ( number_2 != 0)
        {
              result= number_1 / number_2;
    printf(" the result = %.2f\n", result);
        }
    else
    {
    printf(" Error : cannot divide by zero! \n");
    }
    }
    else
    {
        printf("Invalid operator !\n");
    }

    return 0;
}