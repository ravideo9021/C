// calculation of gross marks of a student

#include <stdio.h>

int main(){
    float marks[5] , sum= 0;

    for(int i = 0; i<5; i++)
    {
        printf("\nenter the marks of Subject %d : ", i+1);
        scanf("%f", &marks[i]);
        if (marks[i]>100){
            printf("Entered Mark is Invalid(marks<=100)");
            break;
            }

        sum = sum + marks[i];
        
    }
    
    printf("\nAggregate marks obtained = %f", sum);
    printf("\nAggeregate percentage = %f", sum/5);

    return 0;
}