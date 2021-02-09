#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define EOF (-1)

int main(){
    FILE *inp, *out;
    int arr[1000], i, count, tmp, num;
    i = 0;
    count = 0;
    inp = fopen("zero.txt", "r");
    out = fopen("write.txt", "w");
    while(fscanf(inp, "%d ", &tmp) != -1){
        arr[i] = tmp;
        printf("%d ", arr[i]);
        i++;
        count++;
    }
    printf("\n");
    do{
        printf("Input number element for delete: ");
        scanf("%d", &num);
    
    }
    while(num > count || num < 0);
    for(i = num; i < count;i++){ 
        arr[i] = arr[i + 1];
    }
    printf("\n");
    for(i = 0; i < count - 1; i++){
        printf("%d ", arr[i]);
        fprintf(out, "%d ", arr[i]);
    }
    fclose(inp);
    fclose(out);
    return 0;
}