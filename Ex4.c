#include <stdio.h>
/*
@desctiption: asks users to input value of x, and 
displays its value of the following polynomial
@author: mohamed s harding
 */

int main() {

    // local variable declaration
    int value; /* value */
    int polynomial; /* polynomial */

    // prints the radius and computed volume value
    printf ("Enter a value for x: \n " ); /* input value for x */
    scanf ( "%d", &value);

    polynomial = 3*value*value*value*value*value + 2*value*value*value*value - 5*value*value*value - 1*value*value + 7*value - 6; /* polynomial equation given */
    printf ( "The volume of computer polynomial is: %d. \n ", polynomial); /* output value for final value */

    // program ends
    return 0;
}