#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // get points
    int points = get_int("How many points did you lose? ");

    // compare points against me
    if (points < 2)
    {
        printf("You lost fewer points than me.\n");
    }
    else if (points > 2)
    {
        printf("You lost more points than me.\n");
    }
    else
    {
        printf("You lost the same number of points as me.\n");
    }
}