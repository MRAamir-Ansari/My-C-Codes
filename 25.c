#include<stdio.h>
float product();    // Function Prototype
int main(){         
    product();      // Function call // No Arguements
}

float product(){    // Function Definition
    int a = 5;
    int b = 10;
    int c;
    c = a * b;
    printf("%d\n", c);
    // No Return value
}