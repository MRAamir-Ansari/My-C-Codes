#include<stdio.h>
int main(){
    int a, b;
    printf("enter numbers for a and b:\n");
    scanf("%d%d", &a, &b);

    if(a>b){
        printf("%d is greater than %d", a, b);
    }
}