#include<stdio.h>
#include<string.h>
struct RAYYAN {
        char name[30];
        int roll_no;
        int age;
    };
int main(){
    struct RAYYAN s1;

    strcpy (s1.name, "Rayyan");
    s1.roll_no = 230;
    s1.age = 18;

    printf("Name = %s\n", s1.name);
    printf("Roll No. = %d\n", s1.roll_no);
    printf("Age = %d", s1.age);
}