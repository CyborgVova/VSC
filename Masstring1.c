#include<stdio.h>
#include<string.h>

void countChar(const char *string);

int main(){
    char str[100];
    printf("Input any string: ");
    fgets(str, sizeof(str), stdin);
    fflush(stdin);
    countChar(str);
    return 0;
}

void countChar(const char *string){
    int i = 0;
    while(string[i] != '\0'){
        i++;
    }
    printf("%d characters", i - 1);
}
