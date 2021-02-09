#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define EOF (-1)

int main(){
    int tmp, arr[1000], count, num1, num2, i;
    count = 0;
    FILE *inp, *out;
    inp = fopen("zero.txt", "r");
    out = fopen("write.txt", "w");
    while(fscanf(inp, "%d ", &tmp) != -1){
        arr[count] = tmp;
        printf("%d ", arr[count]);
        count++;
    }
    printf("\n");
    do{
    printf("Input two numbers: ");
    scanf("%d %d", &num1, &num2);
    }
    while(num1 <= 0 || num2 <= num1 || num2 >= count - 1);
    for(i = num2; i < count; i++){
        arr[num1] = arr[num2 + 1];
        num2++;
        num1++;
    }
    count = count - (num2 -num1) - 1;
    for(i = 0; i < count; i++){
        fprintf(out, "%d ", arr[i]);
        printf("%d ", arr[i]);
    }
    return 0;
}