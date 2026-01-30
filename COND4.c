#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int year;

    scanf("%d", &year);

    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
        printf("Leap Year\n");
    else
        printf("Not Leap Year\n");

    return 0;
}

