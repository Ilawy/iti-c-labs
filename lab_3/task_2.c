// Write a program to read an array and print it using 2 for loops?
#include "stdio.h"
#include "../lab_2/conio.h"

#define SIZE 12

int main()
{
    int array[SIZE] = {0};
    int rows = 0;
    printf("Please enter the number of rows: ");
    scanf(" %d", &rows);
    if (rows > SIZE || SIZE % rows != 0)
    {
        printf("wrong input\n");
        return 1;
    }

    int input = 0;
    for (int i = 0; i < SIZE; i++)
    {
        printf("Please enter the (%d/%d) element: ", i + 1, SIZE);
        scanf(" %d", &input);
        array[i] = input;
    }

    system("clear");

    int cols = SIZE / rows;
    for (int row = 0; row < rows; row++)
    {
        for (int col = 0; col < cols; col++)
        {
            gotoxy(col * 3 + 3, row * 3 + 3);
            int index = row * cols + col;
            printf("%d\n", array[index]);
        }
    }

    return 0;
}
