#include <stdio.h>
#include <string.h>

int countChar(const char *string, char znak);

int main(){
    char str[100], ch;
    printf("Input any string: ");
    fgets(str, sizeof(str), stdin);
    fflush(stdin);
    printf("Input any character: ");
    scanf("%c", &ch);
    int res = countChar(str, ch);
    printf("Index your character: %d", res);
    return 0;
}

int countChar(const char *string, char znak){
    int i;
    for (i = 0; string[i] != '\0'; i++){
        if (string[i] == znak){
            return i;
        }
    }
    return 0;
}
