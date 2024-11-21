#include "stdio.h"
#include "conio.h"
#include <unistd.h>

int decr(int size, int current)
{
    return ((current == 0) ? (size - 1) : (current - 1));
}

int incr(int size, int current)
{
    return ((current == (size - 1)) ? 0 : (current + 1));
}

int main()
{
    int size = 0;
    char input[100];
    int number;
    int scanResult;

    while (1)
    {
        printf("Please enter a positive odd number: ");

        // Read input as a string first
        if (fgets(input, sizeof(input), stdin) == NULL)
        {
            printf("Error reading input.\n");
            continue;
        }

        // Remove newline character if present
        input[strcspn(input, "\n")] = 0;

        // Try to convert string to integer
        scanResult = sscanf(input, "%d", &number);

        // Check for conversion success, positive odd number
        if (scanResult == 1 && number > 0 && number % 2 != 0)
        {
            size = number;
            break;
        }
        else
        {
            printf("Invalid input. ");

            // Provide specific error messages
            if (scanResult != 1)
            {
                printf("Please enter a valid numeric value.\n");
            }
            else if (number <= 0)
            {
                printf("The number must be positive.\n");
            }
            else
            {
                printf("The number must be odd.\n");
            }
        }
    }
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
