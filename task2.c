#include<stdio.h>
<<<<<<< HEAD
#include<locale.h>



int main(){
    setlocale(LC_ALL, "Rus");  
        char i, j, N;
            printf("ВВедите число: ");
                scanf("%d", &N);
=======

int main(){
     
    char i, j, N;
    printf("ВВедите число: ");
    scanf("%d", &N);
>>>>>>> c64fb5844908bdbb8a8c4ccacab17be7c5cee0dd

    for (i = 0;i < N + 1;i++){
        for (j = 0; j < i; j++)
            printf("*");
            for (j = N; j > i; j--)
                printf(" ");
        printf("\n");
    }

        printf("\n");
    for (i = 0;i < N + 1;i++){
        for (j = N; j > i; j--)
            printf("*");
            for (j = 0; j < i; j++)
                printf(" ");
        printf("\n");
    }

        printf("\n");
     for (i = 0;i < N;i++){
        for (j = 0; j < i; j++)
            printf(" ");
            for (j = N; j > i; j--)
                printf("*");
        printf("\n");
    }
 
        printf("\n");
    for (i = 0;i < N + 1;i++){
        for (j = N; j > i; j--)
            printf(" ");
            for (j = 0; j < i; j++)
                printf("*");
        printf("\n");
    }
          return 0;
}