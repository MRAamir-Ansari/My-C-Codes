#include<stdio.h>
int main(){
    int a, b;
    
    printf("Enter 2 Numbers: \n");
    scanf("%d %d", &a, &b);

    (a>b)? printf("True as %d > %d", a, b): printf("False as %d !> %d", a, b);
}