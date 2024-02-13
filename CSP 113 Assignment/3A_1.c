#include <stdio.h>

// calulation of gross Salary

int main(){
    float BasicSalary, DA, HRA, GrossSalary;
    printf("Enter your Basic Salary: ");
    scanf("%f", &BasicSalary);

    DA = 0.4 * BasicSalary;
    HRA = 0.28 * BasicSalary;

    GrossSalary = BasicSalary + DA + HRA;

    printf("Gross Salary = %f", GrossSalary);

    return 0;
}