// Write a C program to print the multiplication table in ascending order from table 1 to table 10 sequentially and separated by group of “ *’s ”.
#include "stdio.h"


int main()
{
    for(int table = 1; table <= 10; table++){
        printf("\t*********\n");
        for(int number = 1; number <= 12; number++){
            printf("\t%d x %d = %d\n", table, number, table * number);
        }
        printf("\t*********\n\n");
    }
    /* code */
    return 0;
}