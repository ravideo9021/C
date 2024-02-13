#include <stdio.h>
/*
int main(){
    
    long num1 = 123;
    long int num2 = 234;
    short num3 = 345;
    double num4 = 456;

    printf("%ld \n%ld \n%hi \n%lf", num1, num2, num3, num4);

}
*/

int main() 
{
char ch;
char str[15];
char sentance[30];

scanf("%c\n%s\n", &ch, str); 
fgets(sentance, 30, stdin);

printf("%c\n%s\n", ch, str);
puts(sentance);
    return 0;
}