#include <stdio.h>

float multF(float, float);

int main()
{
    float a, b, mult;
    printf("Введи через пробел два числа с плавающей точкой: ");
    scanf("%f %f", &a, &b);
    mult = multF(a, b);
    printf("Результат произведения этих двух чисел: %.3f", mult);
    return 0;
}
float multF(float x, float y)
{
    float z = x * y;
    return z;
}
