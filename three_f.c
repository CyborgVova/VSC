#include <stdio.h>
#define EOF (-1)

int main()
{
    int tmpone, tmptwo;
    FILE *one, *two, *out;
    one = fopen("one.txt", "r");
    two = fopen("two.txt", "r");
    out = fopen("out.txt", "w");
    while (fscanf(one, "%d", &tmpone) != -1)   //while(!feof(one)) Равнозначная запись ,
    {                                          // но в тело надо писать fscanf для обоих файлов
        fscanf(two, "%d", &tmptwo);
        fprintf(out, "|%10d |%10d |\n", tmpone, tmptwo);
    }
    fclose(one);
    fclose(two);
    fclose(out);
    return 0;
}