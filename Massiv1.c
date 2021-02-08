#include<stdio.h>
#include<stdlib.h>
#define EOF (-1)
int main(){
    int tmp, arr[1000], i, count, num, x, tm;
    tm = 0;
    count = 0;
    FILE *inp, *out;
    inp = fopen("zero.txt", "r");
    out = fopen("write.txt", "w");
    while(fscanf(inp, "%d", &tmp) != -1){    // Считываем массив
            fprintf(out, "%d ", tmp);
            arr[count] = tmp;                // Поэлементно
            count++;                         
            tm++;                            // Счетчик элементов массива
        }
        printf("Input any number: \n");
        scanf("%d", &num);
        do{printf("Input number of element: \n");
        scanf("%d", &x);}
        while(x > tm - 1 || x < 0);
                for(i = count; i >= x; i--){
            arr[count] = arr[count - 1];          // Сдвигаем массив начиная с последнего элемента , до элемента X включительно , 
            count--;                              // чтобы записать в нужное место новое значение .
        }
        arr[x] = num;                             // Записываем в нужное место необходимый элемент
        for(i = 0; i <= tm; i++){            
            printf("%d ", arr[i]); 
            fprintf(out, "%d ", arr[i]);          // Печатаем обновленный массив
        }
    fclose(inp);
    fclose(out);
    return 0;
}