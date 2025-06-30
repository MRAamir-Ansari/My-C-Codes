#include<stdio.h>
float product(int a, int b);
int main(){
    int a = 5;
    int b = 10;
    // int c;
    // c = product(a,b);
    printf("The Value = %.0f", product(a,b));
}
float product(int a, int b) {
    int c;
    c = a * b;
    return (c);
}