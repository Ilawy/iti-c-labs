#include "stdio.h"
#include "../lab_2/conio.h"


int main(){
    while(!kbhit()){
        printf("nothing");
        // printf("%d\n", getch());
    }
}