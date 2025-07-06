#include<stdio.h>
#include<string.h>
struct student {
        char name[30];
        int roll_no;
        int age;
    };
static struct student s1;
int main(){
    strcpy(s1.name, "Rayyan");
    s1.roll_no = 230;
    s1.age = 18;

    printf("Name is %s\n", s1.name);
    printf("Roll Number is %d\n", s1.roll_no);
    printf("Age is %d", s1.age);

}