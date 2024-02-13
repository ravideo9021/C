#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *fptr;
    
    fptr = fopen("TestFile.txt", "r");
    if (fptr == NULL){
        printf("File Does not exist");
        return 1;
    }

    int i1, i2, i3, i4, i5;

    fscanf(fptr, "%d", &i1);
    printf("Integer 1: %d\n", i1);

    fscanf(fptr, "%d", &i2);
    printf("Interger 2: %d\n", i2);

    fscanf(fptr, "%d", &i3);
    printf("Interger 3: %d\n", i3);

    fscanf(fptr, "%d", &i4);
    printf("Interger 4: %d\n", i4);

    fscanf(fptr, "%d", &i5);
    printf("Interger 5: %d\n", i5);
    
    // char ch;
    // ch = fgetc(fptr);
    // while(ch != EOF){
    //     printf("%c", ch);
    //     ch = fgetc(fptr);
    // }
    // printf("\n");

    // fputc('R', fptr);
   // printf("%c", fgetc(fptr));
    fclose(fptr);

return 0;
}