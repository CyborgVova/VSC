#include <stdio.h>

int main()
{
    int N;
    printf("Введите число: ");
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        printf("#");
    }
    printf("\n");

    if (N != 2)
    {
        for (int i = 0; i < N; i++)
        {
            printf("#");

            for (int j = 1; j < N - 1; j++)
            {
                printf("*");
            }
            printf("#\n");
        }
    }
    for (int i = 0; i < N; i++)
    {
        printf("#");
    }

    return 0;
}