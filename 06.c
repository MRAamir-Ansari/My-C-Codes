#include<stdio.h>
int main(){
    int A , B , c;
    printf("Enter A\n");
    scanf("%d", &A);

    printf("Enter B\n");
    scanf("%d", &B);

    c =  A + B;
    printf("%d + %d = %d\n", A, B, c);

    c =  A - B;
    printf("%d - %d = %d\n", A, B, c);

    c =  A * B;
    printf("%d * %d = %d\n", A, B, c);
    
    c =  A / B;
    printf("%d / %d = %d\n", A, B, c);
}