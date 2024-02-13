//Conversion of Seconds into Hours and Minutes

#include <stdio.h>

int main(){
    
    int InputSecond;
    printf("Enter the no of seconds : ");
    scanf("%d", &InputSecond);
    
    int hour = InputSecond/3600;
    int remain1 = InputSecond - hour*3600;
    int min = remain1/60;
    int sec = remain1 - min*60;

    printf("%d:%d:%d", hour, min, sec);

    return 0;
}