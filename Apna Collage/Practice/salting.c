#include <stdio.h>
#include <string.h>

void salting(char*);

int main(){
    char password[100];

    printf("\nEnter a string : ");
    scanf("%s", password);
  
    salting(password);

return 0;
}

void salting(char password[100]){
            char newPass[100];
            char salt[] = "123";
            strcpy(newPass, password);
            strcat(newPass, salt);
            
            puts(newPass);
}