#include <stdio.h>

int main()
{
    char i, j, N;
    printf("ВВедите число: ");
    scanf("%d", &N);

    for (i = 0; i < N + 1; i++)
    {
        for (j = 0; j < i; j++)
            printf("*");
        for (j = N; j > i; j--)
            printf(" ");
        printf("\n");
    }

    printf("\n");
    for (i = 0; i < N + 1; i++)
    {
        for (j = N; j > i; j--)
            printf("*");
        for (j = 0; j < i; j++)
            printf(" ");
        printf("\n");
    }

    printf("\n");
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < i; j++)
            printf(" ");
        for (j = N; j > i; j--)
            printf("*");
        printf("\n");
    }

    printf("\n");
    for (i = 0; i < N + 1; i++)
    {
        for (j = N; j > i; j--)
            printf(" ");
        for (j = 0; j < i; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}