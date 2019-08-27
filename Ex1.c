#include <stdio.h>
/*
@desctiption: computes volume of sphere, using a pre-defined
radius value of 10
@author: mohamed s harding
 */

/*
 * Main Function
 */

int main() {

    // local variable declaration
    float radius = 10; /* radius */
    const float PI = 3.14285714; /* PI value */
    float volume = (4.0/3.0) * PI * (radius * radius * radius); /* formular to calculate volume of sphere */

    // prints the radius and computed volume value
    printf ( "The radius is: %f " , radius); /* displays radius value */
    printf ( "The volume of sphere is: %f " , volume); /* final output of sphere volume */

    // program ends
    return 0;
}