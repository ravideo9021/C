#include <stdio.h>
#include <string.h>

struct student{
    int roll;
    float cgpa;
    char name[100];
};

int main(){
    struct student s1;
    s1.roll = 20;
    s1.cgpa = 3.75;
    strcpy(s1.name, "ravi");

    printf("Student Name = %s\n" ,s1.name);
    printf("Roll No. = %d\n", s1.roll);
    printf("CGPA = %f\n", s1.cgpa);

    struct student s2;
    s2.roll = 2;
    s2.cgpa = 5.89;
    strcpy(s2.name, "Rahul");

    struct student s3;
    s3.roll = 50;
    s3.cgpa = 3.99;
    strcpy(s3.name, "yash");

    struct student s4;
    s4.roll = 500;
    s4.cgpa = 3.45;
    strcpy(s4.name, "Deepesh");

    printf("%s\n%s\n%s\n%s", s1.name, s2.name, s3.name, s4.name);


return 0;
}