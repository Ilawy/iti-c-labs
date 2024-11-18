// Write a program to find the maximum and minimum values of a set of numbers using a single dimension array.
#include "stdio.h"
#define SIZE 10

int main(){
    int array[SIZE] = {0};
    int input = 0;
    for(int i = 0; i < SIZE; i++){
        printf("Please enter value number (%d/%d): ", i+1, SIZE);
        scanf(" %d", &input);
        array[i] = input;
    }

    int reference = array[0];
    for(int i = 1; i < SIZE; i++){
        if(array[i] > reference)reference = array[i];
    }
    printf("MAX: %d\n", reference);

    reference = array[0];
    for(int i = 1; i < SIZE; i++){
        if(array[i] < reference)reference = array[i];
    }
    printf("MIN: %d\n", reference);
}