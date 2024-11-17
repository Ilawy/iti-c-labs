// Write a C program to print the multiplication table in ascending order from table 1 to table 10 sequentially and separated by group of “ *’s ”.
// Rewrite the previous program to print them in descending order.
#include "stdio.h"


int main()
{
    for(int table = 10; table >= 1; table--){
        printf("*************\n");
        for(int number = 1; number <= 12; number++){
            printf("%d x %d = %d\n", table, number, table * number);
        }
        printf("*************\n\n");
    }
    /* code */
    return 0;
}
