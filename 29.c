#include<stdio.h>
struct RAYBAN {
        int m, f;
        float b;
        char c;
    };
int main(){
    int m = 10;
    float b = 9.0;
    int f = 8;

    m = m * b;
    b = m * f;
    printf(" %d \n %.2f \n %d", m, b, f);
}                                                                                                                         