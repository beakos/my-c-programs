#include <cs50.h>
#include <stdio.h>

int main(void) // add with long
{
    // first input
    long x = get_long("x: ");
    
    // second imput
    long y = get_long("y: ");
    
    // perfrom sum
    printf("%ld\n", x + y);
}