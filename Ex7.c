#include <stdio.h>

/** 
 * @author: Mohamed S Harding
 * @description: accept item number, unit price, and year from user
 * and displays it in tabbed view
 */

int main() {
    int item_number; 
    float unit_price;
    int year;
    // int purchase_date;

    printf("Enter item number: \n");
    scanf("%d", &item_number);

    printf("Enter unit price: \n");
    scanf("%f", &unit_price);

    printf("Enter year: \n");
    scanf("%d", &year);

    printf("Item \t Unit Price \t Year \n ");
    printf("%d \t %f \t %d \n ", item_number, unit_price, year);
}