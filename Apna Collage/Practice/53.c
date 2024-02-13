#include <stdio.h>

void VowelsCount(char*);

int main(){
    char str[100];

    printf("\nEnter a string : ");
    scanf("%s", str);
  
    VowelsCount(str);

return 0;
}

void VowelsCount(char str[100]){
    int i, count = 0;
    for(i=0; str[i] != '\0'; i++){
          if (str[i] == 'a' || str[i] =='e' || str[i] =='i' || str[i] =='o' || str[i] =='u'
            || str[i] =='A' || str[i] =='E' || str[i] =='I' || str[i] =='O' || str[i] =='U'){
             count++;
          }
    }
    printf("No. of Vowels = %d", count);
}