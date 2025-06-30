#include<stdio.h>
int main(){
    int a;
    
    printf("Enter the value of a: ");
    scanf("%d", &a);

    if(a!=10){
        printf("%d is not equal to 10", a);
    }

    else if (a>15){
        printf("%d is greater than 15", a);
    }
    
    else if (a<20){
        printf("%d is lesser than 20", a);
    }

    else{
        printf("%d is equal to 10", a);
    }
}