#include <stdio.h>
#include <string.h>

struct student{
    char name[20];
    int roll;
    float cgpa;
};

int main(){
    char ch[20];

    struct student s1[4];
    for(int i=0; i<4; i++){
        printf("\nEnter the Name, roll and cgpa of student %d: ", i+1);
        scanf("%s %d %f", ch, &s1[i].roll, &s1[i].cgpa);
        strcpy(s1[i].name, ch);
    }

    for(int i=0; i<4; i++){
        printf("\nName: %s\nRoll: %d\nCGPA: %f", s1[i].name, s1[i].roll, s1[i].cgpa);
        printf("\n");
    }
return 0;
}