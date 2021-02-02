#include<stdio.h>
#define EOS (-1)

int main(){
    int tmpone, tmptwo;
FILE *one, *two, *out;
one = fopen("one.txt", "r");    
two = fopen("two.txt", "r");
out = fopen("out.txt", "w");
while(fscanf(one, "%d", &tmpone) != -1){
fscanf(two, "%d", &tmptwo);
fprintf(out, "|%10d |%10d |\n", tmpone, tmptwo);
}
fclose(one);
fclose(two);
    return 0;
}