# include <stdio.h>
# include <stdlib.h>

int main(){
    int *ptr;
    
    ptr = (int *) malloc(5 * sizeof(int));

    ptr[0] = 4;
    ptr[1] = 56;
    ptr[2] = 54;
    ptr[3] = 2;
    ptr[4] = 45;
    
    int i=0;
    while (i<=4){
        printf("%d\n", ptr[i]);
        i++;
    }
return 0;
}