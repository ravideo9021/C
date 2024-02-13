#include <stdio.h>

void CharCheck(char*, char);

int main(){
    char str[100];
    char ch;

    printf("\nEnter a string : ");
    scanf("%s", str);

    getchar();

    printf("Enter a Character : ");
    scanf("%c", &ch);
  
    CharCheck(str, ch);

return 0;
}

void CharCheck(char str[100], char ch){
    int i = 0, c = 0; 

    for(i; str[i] != '\0'; i++){
          if (str[i] == ch){
             c++;
          }
    }

    if(c == 0){
        printf("%c is not present", ch);
    }

    else printf("%c is Present", ch);
   
}