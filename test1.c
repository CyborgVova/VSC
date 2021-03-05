#include <conio.h>
#include <stdio.h>
 
int main() {
    int N;
    printf("Input signed number: ");
    scanf("%d", &N);
    int i, mass[N], x, y, z;
    x = 0;
    y = 1;
    for(i = 0; i < N; i++){
        x++;
        mass[i] = x;
        printf("%d ", mass[i]);
    }
    printf("\n");    
        for(i = 0; i < N; i++){
                printf("%d ", mass[i]);
            }
    /*printf("\n");
    for(i = 0; i < N; i++){
        if(mass[i] % mass[2] != 0){
            printf("%d ", mass[i]);
        }
    }*/
    return 0;
}