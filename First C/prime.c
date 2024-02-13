//smallest of three numbers
#include <stdio.h>

int main(){
    int n, c=0;
    printf("Enter a number : ");
    scanf("%d", &n);
    
    if (n<=1) c=1;

    for (int i=2; i<n/2; i++){
        if ( n%i == 0 ){
            c++;
            break;
        }
    }

    if(c==0){
    printf("%d is a prime no.", n);
    }
    else printf("%d is not a prime no.", n);

return 0;
}