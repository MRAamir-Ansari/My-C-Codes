#include <stdio.h>
int main(){

    int a = 5;
    int *p;
    p = &a;

    printf("Pointer variable 'p' holding address of 'a' is %u \n", p);
    printf("Address of a variable 'a' is %u \n", &a);
    printf("Value of 'a' is %d \n", *p);

}