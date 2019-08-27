#include <stdio.h>

/**
 * @author: Mohamed S Harding
 * @description: mini currency converter
 * USD, SLL as currencies
 */
void dollar_leone();
void leone_dollar();

/*
 * Main Function
 */

int main() {
    int options;
    printf("++++++++++++++++++++++++ \n++ Currency Converter ++ \n++ Mohamed S Harding  ++ \n++++++++++++++++++++++++ \n");
    printf("Select: \n 1. USD/SLL \n 2. SLL/USD \n");
    scanf("%d", &options);
    switch (options) {

        case 1: 
            
            dollar_leone();
            break;
        
        case 2:

            leone_dollar();
            break;
    }
    return 0;
}

/*
 * Dollar to Leone
 */

void dollar_leone() {
    // variable declaration 
    float dollar_amount; /* dollar amount */
    float dollar_conversion; /* dollar conversion */
    float dollar_exchange_rate; /* dollar exchange rate */

    printf("Enter exchange rate (SLL): \n"); /* input exchange rate */
    scanf("%f", &dollar_exchange_rate);

    printf("Enter currency (USD): \n"); /* input currency */
    scanf("%f", &dollar_amount);

    dollar_conversion = dollar_amount*dollar_exchange_rate/1; /* conversion formulae */

    printf("Converted currency in (SLL): %f. \n", dollar_conversion); /* ouput converter currency */
}

/**
 * Leone to Dollar
 */

void leone_dollar() {
    // variable declaration 
    float leone_amount; /* leone amount */
    float leone_conversion; /* leone conversion */
    float leone_exchange_rate; /* dollar exchange rate */

    printf("Enter exchange rate (USD): \n"); /* input exchange rate */
    scanf("%f", &leone_exchange_rate);

    printf("Enter currency (SLL): \n"); /* input currency */
    scanf("%f", &leone_amount);

    leone_conversion = leone_amount*leone_exchange_rate/1; /* conversion formulae */

    printf("Converted currency in (USD): %f \n", leone_conversion); /* ouput converter currency */
}