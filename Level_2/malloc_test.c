#include <stdio.h>
#include <stdlib.h>

int main(){
    int *p = (int *)malloc(5 * sizeof(int));

    if (p == NULL){
        printf("\nMemory allocation Failed");
        return 1;
    }
    
    scanf("%d %d %d", &p[0], &p[1], &p[2]);
    printf("%d %d %d", p[0], p[1], p[2]);
    free(p);
    return 0;
}
/*

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p;

    // Allocate memory for a single integer
    p = (int *)malloc(sizeof(int));

    // Check if memory allocation was successful
    if (p == NULL) {
        printf("Memory allocation failed\n");
        return 1; // Exit the program with an error code
    }

    // Read an integer from the user and store it in the allocated memory
    scanf("%d", p);

    // Print the value stored in the allocated memory
    printf("%d\n", *p);

    // Don't forget to free the dynamically allocated memory
    free(p);

    return 0; // Exit the program successfully
}
*/