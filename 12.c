#include<stdio.h>
int main(){
    int a[3][3];
    int i, j;

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("Enter element of a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n matrix is: \n");
    for(i = 0; i < 3; i++){
        printf("\n");
        for(j = 0; j < 3; j++){
            printf("%3d", a[i][j]);
        }
    }
}