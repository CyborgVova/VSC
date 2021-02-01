#include<stdio.h>

#define EOS (-1)

int main(){
    int x;
    FILE *my_file;
    my_file = fopen("output.txt", "r");       // Флаги r - read , w - write(УДАЛЯЕТ СОДЕРЖИМОЕ) , a - append (чтение,запиь,дополнение)
   // scanf("%d", &x);                        // Ввод числа с клавиатуры для записи во внешний файл
  //  fprintf(my_file, "%d", x);              // Запись числа в открытый файл
   fscanf(my_file, "%d", &x);                 // Считывание числа из внешнего файла
   printf("%d", x);                           // Все стандартно : Вывод в консоль содержимого переменной
      fclose(my_file);                        // Закрывает файл после работы с ним

    return 0;
}