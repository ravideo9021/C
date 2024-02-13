// Write a menu-based program to perform operations on Linear
// Array:
// i) Insert an element at the Kth Position.
// ii) Delete an element from the Kth Position.
// iii) Traverse an array element.
#include <stdio.h>
#include <stdlib.h>

void Insertion(int *, int);
void Deletion(int *, int);
void Traverse(int *, int);
int search(int, int *, int);


int main(){
    int n;
    printf("Size of array? ");
    scanf("%d", &n);

    int arr[n+1];

    for(int i = 0; i < n; i++){
        printf("Enter Element %d: ", i+1);
        scanf("%d", arr+i);
    }

    int operation;
    printf("\nPress 1 - To Insert an element");
    printf("\nPress 2 - To Delete an element");
    printf("\nPress 3 - Traverse the array element");
    printf("\nEnter (1, 2, 3): ");
    scanf("%d", &operation);

    switch(operation){

        case 1:
            Insertion(arr, n);
            for(int i = 0; i < n+1; i++){
                printf("%d\t", arr[i]);
            }
            break;
        
        case 2:
            Deletion(arr, n);
            for(int i = 0; i < n-1; i++){
                printf("%d\t", arr[i]);
            }
            break;
        
        case 3:
            Traverse(arr, n);
            break;

        default:
            printf("Enter a valid Input (1-3)");
            exit(0);
            break;
    }
    

    return 0;
}


void Insertion(int *arr, int n){
    int new_value, pos;

    printf("Value: ");
    scanf("%d", &new_value);

    printf("Position: ");
    scanf("%d", &pos);

    for (int i = n; i >= pos ; i--){
        arr[i] = arr[i-1];
    }

    arr[pos-1] = new_value;

    return;
}

int search(int num, int *arr, int n){
    for(int i = 0; i < n+1; i++){
        if(arr[i] == num){
            return i+1;
        }
    }
    return -1;
}

void Deletion(int *arr, int n){
    int value;

    printf("Value: ");
    scanf("%d", &value);

    int pos = search(value, arr, n);

    for(int i = pos-1; i <= n; i++){
        arr[i] = arr[i+1];
    }
    return;
}

void Traverse(int *arr, int n){
    for (int i = 0; i < n; i++){
        printf("%d\t", arr[i]);
    }
    return;
}