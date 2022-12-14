#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // how many points?
    int points = get_int("How many points did you lose? ");

    // compare user input points vs own points
    if (points < 2)
    {
        printf("You lost fewer points than me.\n");
    }
    else if (points > 2)
    {
        printf("You lost more points than me.\n");
    }
    else if (points == 2)
    {
        printf("You lost the same number of points as me.\n");
    }
}