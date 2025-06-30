#include <stdio.h>
int main(){

    int a[5] = {5,10,15,20,25};
    int i;
    int *p;
    p = a;
    
    for(i=0; i<5; i++){
        printf("The address of %d == %u \n", *p, p);
        p++;
    }
}