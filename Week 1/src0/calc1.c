#include <cs50.h>
#include <stdio.h>

int main(void) // add with int #2
{
    // first input
    int x = get_int("x: ");
    
    // second imput
    int y = get_int("y: ");

    //perform sum
    printf("%i\n", x + y);
}