#include <stdio.h>
#include <sort.h>

void sortArgs(int *a, int *b)
{
    int tmp;
    if (*a > *b)
    {
        tmp = *a;
        *a = *b;
        *b = tmp;
    }
    return;
}