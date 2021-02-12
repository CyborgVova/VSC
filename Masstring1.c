#include<stdio.h>
#include<string.h>

int countChar(const char *string);

int main(){
    char str[100];
    printf("Input any string: ");
    fgets(str, sizeof(str), stdin);
    fflush(stdin);
    int res = countChar(str);
    printf("%d", res - 1);
    return 0;
}

int countChar(const char *string){
    int i = 0;
    while(string[i] != '\0'){
        i++;
    }
    return i;
}