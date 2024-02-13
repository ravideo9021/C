#include <stdio.h>

int main(){
    FILE *fptr;

    fptr = fopen("student.txt", "w");

    char name[20];
    int roll;
    float cgpa;
 
    printf("Enter your Name: ");
    scanf("%s", name);
    printf("Enter your Roll: ");
    scanf("%d", &roll);
    printf("Enter your Cgpa: ");
    scanf("%f", &cgpa);

    fprintf(fptr, "Student Name: %s\n", name);
    fprintf(fptr, "Roll: %d\n", roll);
    fprintf(fptr, "CGPA: %f", cgpa);

return 0;
}