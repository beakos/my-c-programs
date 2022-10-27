#include <cs50.h>
#include <stdio.h>

int main(void) // division int
{
    // first input
    int x = get_int("x: ");
    
    // second input
    int y = get_int("y: ");
    
    // perform division
    int z = x / y;
    printf("%f\n", z);
}