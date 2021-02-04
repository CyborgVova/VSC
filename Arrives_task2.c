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
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("Max = %d\n", max);
    printf("Min = %d", min);
    return 0;
}