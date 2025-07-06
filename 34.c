#include<stdio.h>
int main(){
    enum months {Jan, Feb, Mar, Apr = 10, May, Jun, Jul, Aug};
    enum months m, m1;

    m = Mar;
    m1 = Apr;

    printf("The value of m is %d", m);
    printf("\n The value of m1 is %d", m1);
}