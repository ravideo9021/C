#include <stdio.h>
#include <string.h>

int main(){
    char ch[20];

    printf("Enter the name: ");
    fgets(ch, 20, stdin);


    printf("The name is: %s", ch);

return 0;
}
