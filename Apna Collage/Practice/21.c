#include<stdio.h>
int main(){
    int i;
    printf("Odd Numbers from 3 to 30 are: ");
    for(i=1; i<=30; i++){
        if(i%2==0){
            continue;
        }
        printf("%d\n", i);
    }
    return 0;
}