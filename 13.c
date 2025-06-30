#include<stdio.h>
int main(){
    int a[2][3] = {1,2,3,4,5,6};
    int b[2][3] = {6,5,4,3,2,1};
    int c[2][3];

    int i, j;
    printf("\n Matrix 'a' is: \t");
    for(i = 0; i < 2; i++){
        printf("\n");
        for(j = 0; j < 3; j++){
            printf("%3d", a[i][j]);
        }
    }
    printf("\n Matrix 'b' is: \t");
        for(i = 0; i < 2; i++){
        printf("\n");
        for(j = 0; j < 3; j++){
            printf("%3d", b[i][j]);
        }
    }
    printf("\n Addition of a matrix 'a and b' is: \t");

    for(i = 0; i < 2; i++){
        printf("\n");
        for(j = 0; j < 3; j++){
            c[i][j] = a[i][j] + b[i][j];
            printf("%3d", c[i][j]);
        }
    }
}