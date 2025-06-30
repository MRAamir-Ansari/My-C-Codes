#include <stdio.h>
#include<string.h>

int main(){
    char str[] = "SIMPLY";
    char str1[] = "JUST";

    puts(str); //used to display string
    puts(str1); //used to display string
    strcat(str, str1);
    
    printf("The concatenated string is: %s", str);

    return 0;
}