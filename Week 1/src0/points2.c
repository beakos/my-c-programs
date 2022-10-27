#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //
    const int MINE = 2;
    
    // ask user for amount of points
    int points = get_int("How many points did you lose? ");

    // input points vs mine
    if (points < MINE)
    {
        printf("You lost fewer points than me.\n");
    }
    else if (points > MINE)
    {
        printf("You lost more points than me.\n");
    }
    else
    {
        printf("You lost the same points as me.\n");
    }
}