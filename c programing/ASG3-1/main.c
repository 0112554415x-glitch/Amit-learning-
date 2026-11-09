#include <stdio.h>

int divide(float x, float y, float *result)
{
    if (y == 0)
    {
        return 0;
    }

    *result = x / y;
    return 1;
}

int main(void)
{
    float x, y, result;

    printf("Enter two numbers: ");
    scanf("%f %f", &x, &y);

    if (divide(x, y, &result))
    {
        printf("Result = %.2f\n", result);
    }
    else
    {
        printf("Error: Cannot divide by zero\n");
    }

    return 0;
}