#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE 10

int main(){
    int arr[SIZE], i;
    srand(time(NULL));
    for(i = 0; i < SIZE; i++)
    {
        arr[i] = -500 + rand() % 1001;
        printf("%d ", arr[i]);
    }
    printf("\n");
    for(i = 0; i < SIZE; i++)
    {
        if(arr[i] >= 0)
        {
            printf("%d ", arr[i]);
        }
        else
        {
            printf("%d ", -1 * arr[i]);
        }
    }
    return 0;
}