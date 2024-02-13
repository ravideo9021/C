#include <stdio.h>
#include <string.h>

struct mark{
    char name[20];
    int roll;
    int percentage;
};

int main(){
    struct mark  s1;
    strcpy(s1.name, "Ravi");
    s1.roll = 01;
    s1.percentage = 100;

    printf("Name = %s\nRoll = %d\npercentage = %d", s1.name, s1.roll, s1.percentage);

return 0;
}