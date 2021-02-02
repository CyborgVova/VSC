#include<stdio.h>

int main(){
    float fahr, cel;
    for(fahr = 0; fahr <= 212; fahr++){
        cel = 5.0 / 9.0 * (fahr - 32);
    printf("%10.f%+10.3f\n", fahr, cel);
    }
    return 0;
}