#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Russian");
    char s[80], sym;
    int count, i;
    printf("Введите строку : ");
    gets(s);
    printf("Введите символ : ");
    sym = getchar();
    count = 0;
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == sym)
            count++;
    }
    printf("В строке\n");
    puts(s); // Вывод строки
    printf("символ ");
    putchar(sym); // Вывод символа

    printf(" встречается %d раз(а)", count);

    getchar();
    getchar();
    return 0;
}