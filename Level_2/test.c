#include <stdio.h>
#include <stdlib.h>

int main() {
    int result = 1;

    if (result != 0) {
        fprintf(stderr, "Error: Something went wrong with the operation.\n");

        // Terminate the program with a non-zero exit status
        exit(0);
    }

    // The rest of the program continues if the operation is successful
    printf("Operation completed successfully.\n");

    return 0;
}
