#include <cs50.h>
#include <stdio.h>

int main()
{
    int age, student;
    int price;

    scanf("%d %d", &age, &student);

    if (age < 12)
        price = 50;
    else if (age <= 60)
    {
        if (student == 1)
            price = 80;
        else
            price = 100;
    }
    else
        price = 60;

    printf("Ticket Price = %d\n", price);

    return 0;
}
