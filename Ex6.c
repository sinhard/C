#include <stdio.h>

/** 
 * @author: Mohamed S Harding
 * @description: accept a date from user and format it as yyyymmdd
 */

int main() {

    int day, month, year;

    printf("Enter a date: mm/dd/yyyy \n");
    scanf("%d, \t %d, \t %d", &day, &month, &year);

    printf("You entered the date: %d, %d, %d \n", year, month, day);
    
    return 0;


}