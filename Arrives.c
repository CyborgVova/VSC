#include <conio.h>
#include <stdio.h>
 
#define SIZE 10u
 
int main() {
    int A[SIZE] = {0};  
    unsigned i, j;
    int counter = 1;    //сколько разных чисел введено. Как минимум одно.
    int input;          
    int wasntFound;     //флаг, что введённое число не было найдено
 
    //Вводим первое число. Оно ещё не встречалось.
    printf("0. ");
    scanf("%d", &A[0]);
 
    for (i = 1; i < SIZE; i++) {
        printf("%d. ", i);
        scanf("%d", &input);
        wasntFound = 1;
        //Проверяем, встречалось ли такое число. Если да,
        //то выставляем флаг и выходим из цикла
        for (j = 0; j <= counter; j++){
            if (input == A[j]){
                wasntFound = 0;
                break;
            }
        }
 
        //Если флаг был поднят, то заносим число в массив
        if (wasntFound) {
            A[counter] = input;
            counter++;
        }
    }
 
    for (i = 0; i < counter; i++) {
        printf("%d ", A[i]);
    }
 
    getch();
}