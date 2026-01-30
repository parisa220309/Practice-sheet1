#include <cs50.h>
#include <stdio.h>

int main()
{
    int a, b;
    int sum, diff, prod, rem;
    float quot;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    sum = a + b;
    diff = a - b;
    prod = a * b;

    if (b != 0)
    {
        quot = (float)a / b;
        rem = a % b;

        printf("Sum = %d\n", sum);
        printf("Difference = %d\n", diff);
        printf("Product = %d\n", prod);
        printf("Quotient = %.2f\n", quot);
        printf("Remainder = %d\n", rem);
    }
    else
    {
        printf("Sum = %d\n", sum);
        printf("Difference = %d\n", diff);
        printf("Product = %d\n", prod);
        printf("Division by zero is not allowed.\n");
    }

    return 0;
}
