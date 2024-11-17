// Write a C program to print a simple menu with 3 choices, when select one choice print the choice word and exit.
#include "stdio.h"


int main()
{
    printf("welcome, please select an option:\n 1) Day\n 2) Night\n 3) Midnight\n-->");
    int option = 0;
    int done = 0;
    while(!done){
        scanf(" %d", &option);
        switch (option)
        {
        case 1:
            printf("Your choice: Day");
            done = 1;
            break;
        case 2:
            printf("Your choice: Night");
            done = 1;
            break;
        case 3:
            printf("Your choice: Midnight");
            done = 1;
            break;
        default:
            printf("Error: invalid choice, try again\n-->");
        }
    }

    return 0;
}
