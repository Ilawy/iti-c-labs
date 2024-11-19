// in 3x4 array, sum of each row, average of each column
#include "stdio.h"
#include "../lab_2/conio.h"
#define ROWS 3
#define COLS 4

void reset_color()
{
    printf("\x1B[0m");
}

void print_array(int array[ROWS][COLS], int requested_row, int requested_col)
{
    for (int row = 0; row < ROWS; row++)
    {
        for (int col = 0; col < COLS; col++)
        {
            int is_current = col == requested_col && row == requested_row;
            if (is_current)
            {
                textcolor(BLUE);
                textbackground(GREEN);
                printf(" \t");
            }
            else
            {
                printf("%d\t", array[row][col]);
            }
            reset_color();
        }
        printf("\n\n");
    }
}

int main()
{
    int array[3][4] = {};
    for (int row = 0; row < ROWS; row++)
    {
        for (int col = 0; col < COLS; col++)
        {
            system("clear");
            print_array(array, row, col);
            printf("Enter value for element (%d, %d): ", row, col);
            scanf(" %d", &array[row][col]);
        }
    }


    int rows_sum[ROWS];
    printf("ROWS SUM\n");
    for (int row = 0; row < ROWS; row++)
    {
        // for()
        /* code */
    }
    
    /* code */
    return 0;
}
