#include<stdio.h>
enum days_of_week{
    SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY
};
int main(){
    enum days_of_week today;
    int input;

    printf("Enter numbers between 0 and 6 (0 - Sunday to 6 - Saturday): ");
    scanf("%d", &input);

    if(input < 0 || input > 6){
        printf("Invalid Input.");
        return 1;
    }
    today = (enum days_of_week)input;
    switch (today){
        case SUNDAY:
            printf("Today is Sunday.");
            break;
        
        case MONDAY:
            printf("Today is Monday.");
            break;
        
        case TUESDAY:
            printf("Today is Tuesday.");
            break;
        
        case WEDNESDAY:
            printf("Today is Wednesday.");
            break;
        
        case THURSDAY:
            printf("Today is Thursday.");
            break;
        
        case FRIDAY:
            printf("Today is Friday.");
            break;
        
        case SATURDAY:
            printf("Today is Saturday.");
            break;
        
        default:
            printf("Invalid Day.");
        
    }
}