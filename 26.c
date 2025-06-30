#include<stdio.h>
float product (int a, int b);       // Function Prototype
int main(){
    int a = 5;
    int b = 10;

    product(a, b);               // Function call // With Arguements
} 
float product (int a, int b){    // Function Definition
    int c;
    c = a * b;
    printf("Product of two numbers = %d", c);
    // No Return value
}