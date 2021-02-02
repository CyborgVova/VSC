#include <stdio.h>

struct Citizen
{
    char name[50];
    int age;
    float height;
    float weight;
};
//   void getAge (int *age){ }
int main()
{
    struct Citizen one = {"Volodia", 41, 176.5f, 71.6f};
    struct Citizen two = {"Maksim", 18, 179.5f, 65.7f};
    struct Citizen three = {"Matvey", 4, 112.5f, 17.6f};
    printf("Name:%s,\nAge:%d,\nHeight:%.1f,\nWeight:%.1f\n\n", three.name, three.age, three.height, three.weight);
    printf("Name:%s,\nAge:%d,\nHeight:%.1f,\nWeight:%.1f\n\n", one.name, one.age, one.height, one.weight);
    printf("Name:%s,\nAge:%d,\nHeight:%.1f,\nWeight:%.1f\n", two.name, two.age, two.height, two.weight);

    return 0;
}