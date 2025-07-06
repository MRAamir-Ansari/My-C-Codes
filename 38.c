#include<stdio.h>
int main(){
    FILE *ptr;
    char CH;
    printf("Writing to the File.\n");
    printf("Enter the content to be added in the File: \n");

    ptr = fopen("file.c", "w");
    while((CH = getchar()) != EOF);
    fputc(CH, ptr); 
    fclose(ptr);

    printf("Reading contents of the file.");
    ptr = fopen("file1.c", "r");

    while((CH = fgetc(ptr)) != EOF);
    printf("%c",CH);
    fclose(ptr);
    getchar();
}