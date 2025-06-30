#include<stdio.h>
int main(){
    int a[2][3][3];
    int i,j,k;

    for(i=0;i<2;i++){

        for(j=0;j<3;j++){

            for(k=0;k<3;k++){
                printf("a[%d][%d][%d] = ", i, j, k);
                scanf("%d", &a[i][j][k]);
            }
        }
    }

    printf("\n printing the array elements : \n");

    for(i=0;i<2;i++){
        printf("Matrix %d: \n", i + 1); 
        for(j=0;j<3;j++){

            for(k=0;k<3;k++){

                printf("%d ", a[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}