// Create a menu with a nested menu (make use of getch function and extended keys)

/*
    THIS IS NOT A PART OF THE LAB
    THIS IS A REWRITE OF ORIGINAL MENU
*/

#include "stdio.h"
#include "../lab_2/conio.h"

#define BLUE "\x1B[34m"
#define WHITE "\x1B[37m"
#define RESET "\x1B[0m"

#define KEY_UP

#define ARRAY_SIZE 3
#define ELEMENT_MAX 16

void render_menu(char menu[ARRAY_SIZE][ELEMENT_MAX], int selection)
{
    for (int line = 0; line < ARRAY_SIZE; line++)
    {
        printf("%d) %s%s%s\n", line, line == selection ? BLUE : WHITE, menu[line], RESET);
    }
}

int main(int argc, char const *argv[])
{
    int selection = 1;
    char main_menu[ARRAY_SIZE][ELEMENT_MAX] = {
        "Main",
        "Submenu ->",
        "Exit"};

    char sub_menu[ARRAY_SIZE][ELEMENT_MAX] = {
        "Option 1",
        "Option 2",
        "Go back"};

    while (1)
    {
        char firstch = getch(); // read first
        if (firstch == 27)
        {
            int is_esc = !kbhit();
            if (!is_esc)
            {
                getch();                  // skip ]
                char direction = getch(); // read the direction
                switch (direction)
                {
                case 'B': // DOWN
                    printf("DWN HIT");

                    break;
                case 'A': // UP
                    printf("UP HIT");
                    break;
                }
            }
            printf("ESC HIT\n");
            // getch(); // skip the ]
        }
    }

    // render_menu(main_menu, selection);
    return 0;
}
