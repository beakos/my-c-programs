#include <cs50.h>
#include <stdio.h>

int main(void) // add with int #1
{
    // first input
    int x = get_int("x: ");
    
    // second imput
    int y = get_int("y: ");
    
    // x + y store
    int z = x + y;
    
    // perform sum
    printf("%i\n", z);
}