// Create a menu with a nested menu (make use of getch function and extended keys)

/*
    THIS IS NOT A PART OF THE LAB
    THIS IS A TEST TO THE GETCH FUNCTION, TRYING TO KNOW THE DIFFERENCE BETWEEN ESC AND ARROWS
*/

#include "stdio.h"
#include "../lab_2/conio.h"

#define BLUE "\x1B[34m"
#define WHITE "\x1B[37m"
#define RESET "\x1B[0m"

#define KEY_UP

#define MENU_SIZE 3

int main(int argc, char const *argv[])
{
    int current_index = 0;
    char running = 1;
    char in_sub_menu = 0;
    while (running)
    {
        // system("clear");
        if (!in_sub_menu) // TODO: MAKE A FUNCTION TO GENERATE MENUS
        {
            printf("--My Great Menu--\n\n");
            printf("%s%s%s", current_index == 0 ? BLUE : WHITE, "1) Single Option\n", RESET);
            printf("%s%s%s", current_index == 1 ? BLUE : WHITE, "2) Menu Option ->\n", RESET);
            printf("%s%s%s", current_index == 2 ? BLUE : WHITE, "3) Exit\n", RESET);
        }
        else
        {
            printf("--Sub Menu--\n\n");
            printf("%s%s%s", current_index == 0 ? BLUE : WHITE, "1) Option 1\n", RESET);
            printf("%s%s%s", current_index == 1 ? BLUE : WHITE, "2) Option 2\n", RESET);
            printf("%s%s%s", current_index == 2 ? BLUE : WHITE, "3) Go back\n", RESET);
        }

        char firstch = getch(); // read first
        if (firstch == '\033')
        {
            getch(); // skip the ]

            char direction = getch(); // read the direction
            switch (direction)
            {
            case 'B': // DOWN
                current_index = ((current_index == (MENU_SIZE - 1)) ? 0 : (current_index + 1));

                break;
            case 'A': // UP
                current_index = ((current_index == 0) ? (MENU_SIZE - 1) : (current_index - 1));
                break;
            }
        }
        else if (firstch == 10)
        {
            //ENTER
            if (!in_sub_menu && current_index == 1)
            { // go to sub menu
                in_sub_menu = 1;
            }

            if (!in_sub_menu && current_index == 2)
            {
                // exit
                running = 0;
            }

            if (in_sub_menu && current_index == 2)
            {
                // go back from sub menu
                in_sub_menu = 0;
            }
        }
    }

    return 0;
}

char get_input()
{
    char buffer[3] = {0};
    int tries = 0;
    char current = getch();
    if (current != 27)
        return current;
    while (0)
    {
    }
}