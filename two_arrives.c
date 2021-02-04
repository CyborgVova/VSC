#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

void addArr(int func[SIZE][SIZE]);

int main()
{
    int x[SIZE][SIZE], z[SIZE][SIZE], res[SIZE][SIZE];
    srand(time(0));
    addArr(x);
    addArr(z);
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            res[i][j] = x[i][j] + z[i][j];
            printf("%2d ", res[i][j]);
        }
        printf("\n");
    }
    return 0;
}

void addArr(int func[SIZE][SIZE])
{
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            func[i][j] = 1 + rand() % 31;
            printf("%2d ", func[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
