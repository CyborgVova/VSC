#include <stdio.h>

int main()
{
    int N, i, j;
    printf("Введите цифру: ");
    scanf("%d", &N);

    for (i = 0; i < N / 2 + 1; i++)
    {
        for (j = N / 2; j > i; j--)
            printf(" ");
        for (j = 0; j < i; j++)
            printf("*");
        for (j = 1; j < i; j++)
            printf("*");
        printf("\n");
    }

    for (i = 0; i < N / 2; i++)
    {
        for (j = 0; j < i; j++)
            printf(" ");
        for (j = N / 2; j > i; j--)
            printf("*");
        for (j = N / 2 - 1; j > i; j--)
            printf("*");
        printf("\n");
    }

    return 0;
}