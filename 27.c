#include<stdio.h>
float product();        // Function Prototype
int main(){
    printf("The product of two numbers = %.2f", product());    // Function call   // No Arguements
}
float product(){         // Function Definition
    int a = 5;
    int b = 10;
    int c;

    c = a * b;
    return(c);      //Return Value
}