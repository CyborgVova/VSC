#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

int main()
{
    int arr[SIZE], i;
    srand(time(NULL));
    for (i = 0; i < SIZE; i++)
    {
        arr[i] = 10 + rand() % 21;
        printf("%d ", arr[i]);
    }
    printf("\n");
    for (i = SIZE - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}