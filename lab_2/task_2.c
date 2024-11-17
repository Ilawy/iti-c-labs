// Write a C program to receive numbers from the user, and exit when the sum exceeds 100.
#include "stdio.h"

int main(){
    int sum = 0;
    int input = 0;
    
    do{
        printf("Please enter number:");
        scanf(" %d", &input);
        sum += input;
        printf("Great, result is: %d\n", sum);
    }while(sum <= 100);
    printf("Exiting, total is more than 100");
}