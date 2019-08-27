#include <stdio.h>
/*
@desctiption: accepts dollar-and-cents amount value
and displays the amount with 5% tax added
@author: mohamed s harding
 */

int main() {

    // local variable declaration
    float amount; /* amount */
    float tax_value; /* tax value */
    float pre_tax; /* before tax */
    float post_tax; /* after tax */

    // accepts amount value from user
    printf ("Enter an amount: \n " ); /* input value for dollar amount */
    scanf ( "%f", &amount);

    tax_value = 0.05; /* converted tax value */
    pre_tax = amount * tax_value; /* amount of tax to be added */
    post_tax = amount + pre_tax; /* final tax price */

    printf ( "With tax added: %f. \n ", post_tax); /* output value for final tax value */

    // program ends
    return 0;
}