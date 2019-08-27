#include <stdio.h>

/**
 * @author: Mohamed S Harding
 * @description: temperature converter
 */

/*
 * Main Function
 */

int main() {
    int options;
    printf("++++++++++++++++++++++++ \n++ Currency Converter ++ \n++ Mohamed S Harding  ++ \n++++++++++++++++++++++++ \n");
    printf("Select: \n 1. Celsius to Kelvin \n 2. SLL/USD \n");
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