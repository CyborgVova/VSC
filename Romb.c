#include <stdio.h>

int main()
{
    int N, i, j;
    do
    {
        printf("Введите четное чило: ");
        scanf("%d", &N);
    } while (N % 2 != 0);

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