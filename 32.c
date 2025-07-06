#include<stdio.h>
#include<string.h>
union student{
    char name[24];
    int roll_no;
    int age;
} s1;
struct students{
    char name[24];
    int roll_no;
    int age;
} s2;
int main(){
    printf("The size of union student is %d \n", sizeof(union student));
    printf("The size of structure student is %d \n", sizeof(struct students));
}