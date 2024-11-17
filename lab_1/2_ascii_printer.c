#include "stdio.h"

int main()
{
    //LAB 1
    int a = 10;
    float b = 1.5;
    char c = 'M';

    printf("%c\n", c);
    printf("%d\n", a);
    printf("%f\n", b);
    printf("%.2f\n", b);
    //LAB 2

    /* 
    %d && %i = int
    %f = float (%0.xf)    
    %c = character
    %o = octal
    */
    char *result;
    printf("--- ASCII printer ---\nEnter a character:");
    scanf("%c", result);
    printf("What a great character (%c)\n", result[0]);
    printf("with ASCII: (%i)\n", result[0]);

    // LAB 3

    printf("Hint: the octal code of your inout is: (%o)", result[0]);
}