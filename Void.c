#include <stdio.h>
#include <stdlib.h>

void getValue(int *get_value)
{
    *get_value = 100;
}

int main()
{
    int get_value;
    getValue(&get_value);

    printf("Number:%d", get_value);

    return 0;
}