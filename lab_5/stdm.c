#include "stdio.h"


int string_len(char str[]){
    int i = 0;
    while(str[i] != '\n'){
        i++;
    }

}

void string_cat(char target[], char source[], int size){
    //if len(source) > target+1 do error
}



int main(){
    char target[3] = "ab";
    string_cat(target, "a");
}