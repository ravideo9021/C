#include <stdio.h>

int main(){
    int x;
    printf("Enter a Number: ");
    scanf("%d", &x);

    char *nums[] = {"one", "two", "three", "four", "five",
    "six", "seven", "eight", "nine"};

    for(int i = 0; i <= sizeof(nums); i++){
        if(x < 10){
            if(i+1 == x){
                printf("%s", nums[i]);
                break;
            }
        }
        else {
            printf("Greater then 9");
            break;}
    }


    return 0;
}