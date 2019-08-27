#include <stdio.h>
/*
@desctiption: accept dollar value from user and determines
how to pay using divisor bills
@author: mohamed s harding
 */
void prog_1();
void prog_2();
void prog_3();
void prog_4();
void prog_5();
int main() {

    // local variable declaration
    int menu; /* dollar amount */

    // accept dollar amount value from user
    printf ("Menu: Select \n 1. Volume of Sphere Calculator 1 \n 2. Volume of Sphere Calculator 2 \n 3. Dollar with Tax Added \n 4. X in Polynomial Value \n 5. Dollar Game \n  " ); /* input value for x */
    scanf ( "%d", &menu);

    switch (menu) {

        case 1:
            prog_1();
            break;

        case 2:
            prog_2();
            break;

        case 3:
            prog_3();
            break;

        case 4:
            prog_4();
            break;

        case 5:
            prog_5();
            break;
    }

    // program ends
    return 0;
}

void prog_1() {
    // local variable declaration
    float radius = 10; /* radius */
    const float PI = 3.14285714; /* PI value */
    float volume = (4.0/3.0) * PI * (radius * radius * radius); /* formular to calculate volume of sphere */
        
    // prints the radius and computed volume value
    printf ( "The radius is: %f " , radius); /* displays radius value */
    printf ( "The volume of sphere is: %f " , volume); /* final output of sphere volume */
}

void prog_2() {
    // local variable declaration
    float radius; /* radius */
    const float PI = 3.14285714; /* PI value */
    float volume; /* volume */

    // prints the radius and computed volume value
    printf ("Enter the radius of the sphere: \n " ); /* input value for radius */
    scanf ( "%f", &radius);

    volume = (4.0/3.0) * PI * (radius * radius * radius); /* formular to calculate volume of sphere */
    printf ( "The volume of sphere is: %f. \n ", volume); /* output value for calculated sphere value */
}

void prog_3() {
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
}

void prog_4() {
    // local variable declaration
    int value; /* value */
    int polynomial; /* polynomial */

    // prints the radius and computed volume value
    printf ("Enter a value for x: \n " ); /* input value for x */
    scanf ( "%d", &value);

    polynomial = 3*value*value*value*value*value + 2*value*value*value*value - 5*value*value*value - 1*value*value + 7*value - 6; /* polynomial equation given */
    printf ( "Final value of polynomial is: %d. \n ", polynomial); /* output value for final value */
}

void prog_5() {
    // local variable declaration
    int dollar_amount; /* dollar amount */

    // accept dollar amount value from user
    printf ("Enter a dollar amount: \n " ); /* input value for x */
    scanf ( "%d", &dollar_amount);

    switch (dollar_amount) {

        case 1:
            printf("$20 bills: 0 \n");
            printf("$10 bills: 0 \n ");
            printf("$5 bills: 0 \n ");
            printf("$1 bill: 1 \n ");
            break;

        case 2:
            printf("$20 bills: 0 \n");
            printf("$10 bills: 0 \n ");
            printf("$5 bills: 0 \n ");
            printf("$1 bill: 2 \n ");
            break;
        
        case 3:
            printf("$20 bills: 0 \n");
            printf("$10 bills: 0 \n ");
            printf("$5 bills: 0 \n ");
            printf("$1 bill: 3 \n ");
            break;

        case 4:
            printf("$20 bills: 0 \n");
            printf("$10 bills: 0 \n ");
            printf("$5 bills: 0 \n ");
            printf("$1 bill: 4 \n ");
            break;

        case 5:
            printf("$20 bills: 0 \n");
            printf("$10 bills: 0 \n ");
            printf("$5 bills: 1 \n ");
            printf("$1 bill: 0 \n ");
            break;
        
        case 6:
            printf("$20 bills: 0 \n");
            printf("$10 bills: 0 \n ");
            printf("$5 bills: 1 \n ");
            printf("$1 bill: 1 \n ");
            break;
        
        case 7:
            printf("$20 bills: 0 \n");
            printf("$10 bills: 0 \n ");
            printf("$5 bills: 1 \n ");
            printf("$1 bill: 2 \n ");
            break;

        case 8:
            printf("$20 bills: 0 \n");
            printf("$10 bills: 0 \n ");
            printf("$5 bills: 5 \n ");
            printf("$1 bill: 3 \n ");
            break;

        case 9:
            printf("$20 bills: 0 \n");
            printf("$10 bills: 0 \n ");
            printf("$5 bills: 1 \n ");
            printf("$1 bill: 4 \n ");
            break;

        case 10:
            printf("$20 bills: 0 \n");
            printf("$10 bills: 1 \n ");
            printf("$5 bills: 0 \n ");
            printf("$1 bill: 0 \n ");
            break;

        case 11:
            printf("$20 bills: 0 \n");
            printf("$10 bills: 1 \n ");
            printf("$5 bills: 0 \n ");
            printf("$1 bill: 1 \n ");
            break;
        
        case 12:
            printf("$20 bills: 0 \n");
            printf("$10 bills: 1 \n ");
            printf("$5 bills: 0 \n ");
            printf("$1 bill: 2 \n ");
            break;

        case 13:
            printf("$20 bills: 0 \n");
            printf("$10 bills: 1 \n ");
            printf("$5 bills: 0 \n ");
            printf("$1 bill: 3 \n ");
            break;

        case 14:
            printf("$20 bills: 0 \n");
            printf("$10 bills: 1 \n ");
            printf("$5 bills: 0 \n ");
            printf("$1 bill: 4 \n ");
            break;

        case 15:
            printf("$20 bills: 0 \n");
            printf("$10 bills: 1 \n ");
            printf("$5 bills: 1 \n ");
            printf("$1 bill: 0 \n ");
            break;

        case 16:
            printf("$20 bills: 0 \n");
            printf("$10 bills: 1 \n ");
            printf("$5 bills: 1 \n ");
            printf("$1 bill: 1 \n ");
            break;

        case 17:
            printf("$20 bills: 0 \n");
            printf("$10 bills: 1 \n ");
            printf("$5 bills: 1 \n ");
            printf("$1 bill: 2 \n ");
            break;
        
        case 18:
            printf("$20 bills: 0 \n");
            printf("$10 bills: 1 \n ");
            printf("$5 bills: 1 \n ");
            printf("$1 bill: 3 \n ");
            break;

        case 19:
            printf("$20 bills: 0 \n");
            printf("$10 bills: 1 \n ");
            printf("$5 bills: 1 \n ");
            printf("$1 bill: 4 \n ");
            break;

        case 20:
            printf("$20 bills: 1 \n");
            printf("$10 bills: 0 \n ");
            printf("$5 bills: 0 \n ");
            printf("$1 bill: 0 \n ");
            break;

    }
}



