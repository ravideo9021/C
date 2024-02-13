#include <stdio.h>
#include <string.h>

struct student{
    char name[20];
    int roll;
    float cgpa;
};

int main(){
    char ch[20];

    struct student s1 =  {"Ravi", 12, 9.99};

    printf("Name = %s\nRoll No. = %d\nCGPA = %f", s1.name, s1.roll, s1.cgpa);

    struct student *ptr = &s1;

    printf("\n%d", (*ptr).roll);

    printf("\n%d", ptr->roll);

return 0;
}