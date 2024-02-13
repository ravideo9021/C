#include <stdio.h>

struct student{
    char name[20];
    int roll;
    float cgpa;
};

void PrintStruct(struct student);

void ChangeValue(struct student *);

int main(){
    
    struct student s1 = {"Ravi", 01, 10.00};

    struct student *ptr;
    ptr = &s1;

    ChangeValue(ptr);
    
    PrintStruct(s1);

return 0;
}

void ChangeValue(struct student *s0){
     (*s0).roll = 20;
     (*s0).cgpa = 8.90;
}


void PrintStruct(struct student s0){
    printf("Student's Information: \n");
    printf("Student's Name: %s\n", s0.name);
    printf("Roll No. = %d\n", s0.roll);
    printf("CGPA = %f\n", s0.cgpa);

}