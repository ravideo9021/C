#include <stdio.h>

int main(){
    int day;
    scanf("%d", &day);

    switch(day){
    case 1:
        printf("Saturday");
        break;

    case 2:
        printf("Sunday");
        break;
    
    default:
        printf("Class Hai AAj");
        break;

    }
}