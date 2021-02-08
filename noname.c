#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int N;
    do
    {
        printf("Input number from 1 to 100: ");
        scanf("%d", &N);
        if (N < 1)
        {
            printf("Your number less of 1 , try again!\n");
        }
        if (N > 100)
        {
            printf("Your number more of 100 ,try again!\n");
        }
    } while (N > 100 || N < 1);
    FILE *inp;
    inp = fopen("zero.txt", "w");
    fprintf(inp, "%d\n", N);
    srand(time(0));
    for (int i = 0; i < N; i++)
    {
        int rnd = 1 + rand() % 151;
        fprintf(inp, "%d ", rnd);
        printf("%d ", rnd);
    }
    fclose(inp);
    return 0;
}
