#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 30

int main()
{
    int arr[SIZE], i, min, max;
    srand(time(NULL));
    for (i = 0; i < SIZE; i++)
    {
        arr[i] = 1 + rand() % 500;
        printf("%d ", arr[i]);
    }
    min = arr[0];
    max = arr[0];
    for (i = 0; i < SIZE; i++)
    {
    if (arr[i] > max)
    {
        max = arr[i];
    }
    if (arr[i] < min)
    {
        min = arr[i];
    }
    }
    printf("\nMax = %d", max);
    printf("\nMin = %d", min);
    return 0;
}