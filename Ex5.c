#include <stdio.h>
/*
@desctiption: accept dollar value from user and determines
how to pay using divisor bills
@author: mohamed s harding
 */

int main() {

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

    // program ends
    return 0;
}