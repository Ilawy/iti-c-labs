#include "stdio.h"
#include "inputter.c"
#define max 
typedef struct Menu{
    int size;
    char *items[];//char[][]
    void (*callbacks)(void)[3];
} Menu;

void main_exit(){}

void noop(){}

int main()
{   
   
    int age = prompt_int("Please enter your age: ");
    printf("\n");
    printf("Yay, your age is %d", age);
    return 0;
}


