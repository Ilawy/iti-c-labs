#include "stdarg.h"
#include "stdio.h"
#include "stdbool.h"
#include "ctype.h"



int println(char *fmt, ...)
{
    int ret;

    /* Declare a va_list type variable */
    va_list myargs;

    /* Initialise the va_list variable with the ... after fmt */

    va_start(myargs, fmt);

    /* Forward the '...' to vprintf */
    ret = vprintf(fmt, myargs);
    printf("\n");

    /* Clean up the va_list */
    va_end(myargs);

    return ret + 1;
}


int verify(char * string)
{
    int x = 0;
    int len = strlen(string);

    while(x < len) {
           if(!isdigit(*(string+x)))
           return 1;

           ++x;
    }

    return 0;
}