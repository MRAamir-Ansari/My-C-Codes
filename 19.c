#include<stdio.h>
int main(){
    int a, b;
    
    printf("Enter value of a: ");
    scanf("%d", &a);

    printf("Enter value of b: ");
    scanf("%d", &b);

    if(a != b){
        printf("%d is not equal to %d, \n ", a, b);

        if(a > b){
            printf("and %d is greater than %d", a, b);
        }

        else{
            printf("and %d is lesser than %d", a, b);
        }
    }

    else {
        printf("%d is equal to %d", a, b);
    }
}