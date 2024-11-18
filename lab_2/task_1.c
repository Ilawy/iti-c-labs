#include "stdio.h"
#include "conio.h"
#include <unistd.h>


int decr(int size, int current){
    return ((current == 0) ? (size - 1) : (current - 1));
}

int incr(int size, int current){
    return ((current == (size - 1)) ? 0 : (current + 1));
}


int main()
{
    int size = 0;
    printf("please enter the size of the box: ");
    scanf(" %d", &size);
    system("clear");
    int row = 0, col = size / 2;
    // print first number in the middle of first row
    gotoxy(col * 5 + 5, row + 1);
    printf("%d ", 1);
    for (int i = 2; i <= size * size; i++)
    { 
        if ((i - 1) % size != 0)
        {
            // dec row
            row = decr(size, row);
            // dec col
            col = decr(size, col);
        }
        else
        {
            // inc row
            row = incr(size, row);
        }
        gotoxy(col * 5 + 5, row + 1);
        printf("%d ", i);
        sleep(1);

    }

}
