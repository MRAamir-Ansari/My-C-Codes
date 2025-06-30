#include<stdio.h>
int main(){
    int a;

    printf("Enter the number for a: ");
    scanf("%d", &a);

    while(a < 10){
        printf("%d is less than 10 \n", a);
        ++a;    
    }

    return 0;
}