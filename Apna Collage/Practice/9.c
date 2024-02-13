//program to check if a student is passerd or failed
#include<stdio.h>
int main()
{
    int marks;
    printf("Enter the Marks: ");
    scanf("%d", &marks);
    if(marks>30 && marks<=100){
        printf("PASS");
    }
    else if(marks<=30 && marks ){
        printf("FAIL");
    }
    else{
        printf("Not a valid Mark");
    }
    return 0;
}