// Write a recursive function to compute the power operation: XY
#include "stdio.h"

int mypow(int base, int multiplier)
{
    if (multiplier <= 1)
        return base;
    return base * mypow(base, multiplier - 1);
}

int main()
{
    printf("%d\n", mypow(2, 9));
    return 0;
}