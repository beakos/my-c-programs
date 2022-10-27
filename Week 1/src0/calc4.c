#include <cs50.h>
#include <stdio.h>

int main(void) // division float
{
    // first input
    float x = get_float("x: ");
    
    // second input
    float y = get_float("y: ");
    
    // perform division
    int z = x / y;
    printf("%.50f\n", z);
}