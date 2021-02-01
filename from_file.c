#include<stdio.h>
#define EOS (-1)

int main(){
FILE *inp, *out;
int max, min, tmp, counter;

inp = fopen("input.txt", "r");
out = fopen("output.txt", "w");
fscanf(inp, "%d", &min);
max = min;
counter = 1;
while(!feof(inp)){
fscanf(inp, "%d", &tmp);
if(max < tmp) max = tmp;
if(min > tmp) min = tmp;
counter++;
}
fprintf(out, "Min = %d\nMax = %d\nTotal numbers - %d", min, max, counter);
fclose(inp);
fclose(out);
    return 0;
}