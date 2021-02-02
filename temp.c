#include<stdio.h>
#define EOS (-1)

int main(){
    FILE *fahr_cel;
    fahr_cel = fopen("temp.txt", "w");
    float fahr, cel;
    for(fahr = 0; fahr <= 212; fahr++){
        cel = 5.0 / 9.0 * (fahr - 32);
    fprintf(fahr_cel, "%5.f%cF%+10.3f%cC\n", fahr, 176, cel, 176);
    }
    fclose(fahr_cel);
    return 0;
}