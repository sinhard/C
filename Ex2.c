#include <stdio.h>
/*
@desctiption: computes volume of sphere, using input value
from user
@author: mohamed s harding
 */

int main() {

    // local variable declaration
    float radius; /* radius */
    const float PI = 3.14285714; /* PI value */
    float volume; /* volume */

    // prints the radius and computed volume value
    printf ("Enter the radius of the sphere: \n " ); /* input value for radius */
    scanf ( "%f", &radius);

    volume = (4.0/3.0) * PI * (radius * radius * radius); /* formular to calculate volume of sphere */
    printf ( "The volume of sphere is: %f. \n ", volume); /* output value for calculated sphere value */

    // program ends
    return 0;
}