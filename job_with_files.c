#include <stdio.h>

#define EOF (-1)

int main()
{
    int i, j, N;
    FILE *inp, *out;
    inp = fopen("input.txt", "r");  //Открываем файл для считывания
    fscanf(inp, "%d", &N);          //Считываем целое число из открытого файла
    out = fopen("output.txt", "w"); //Открываем файл для записи
    for (i = 1; i <= N; i++)        //Цикл для записи в файл
    {
        for (j = 1; j <= N; j++)
        {
            fprintf(out, "%c", '*');
        }
        fprintf(out, "\n");
    }
    fclose(inp); //Закрываем файл из которого считывали
    fclose(out); //Закрываем файл в который записывали
    return 0;
}