#include <cs50.h>
#include <stdio.h>

int main()
{
    int x;

    printf("Enter a number: ");
    scanf("%d", &x);

    printf("Post Increment: %d\n", x++);
    printf("After Post Increment: %d\n", x);

    printf("Pre Increment: %d\n", ++x);

    printf("Post Decrement: %d\n", x--);
    printf("After Post Decrement: %d\n", x);

    printf("Pre Decrement: %d\n", --x);

    return 0;
}
