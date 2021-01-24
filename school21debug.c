#include<stdlib.h>
#include<stdio.h>


int main()
{    
    size_t i;
    size_t result;
    result = 0; 
    
    for (i=100;i>0;--i){
    result += i;
    printf("%lu\n",result);
}
}