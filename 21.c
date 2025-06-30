#include<stdio.h>
int main(){
    int a;

    printf("Enter the value of a: ");
    scanf("%d", &a);

    switch(a){
        case 1:
        printf("The value of a is 1");
        break;

        case 2:
        printf("The value of a is 2");
        break;

        case 3:
        printf("The value of a is 3");
        break;

        default: 
        printf("Value is invalid");
    }

}