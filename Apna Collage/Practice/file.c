#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *fptr;
    
    fptr = fopen("abc.txt", "r");

    if (fptr == NULL){
        printf("File not Found\n");
        return 1;
    }

    char ch[20];
    fscanf(fptr, "%s", ch);

    printf("%s", ch);

    fclose(fptr);

return 0;
}