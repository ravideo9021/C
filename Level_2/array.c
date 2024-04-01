#include <stdio.h>
#include <stdlib.h>
#define size 10

void insert(int arr[], int n, int pos, int value);
void delete(int arr[], int pos, int n);
void display(int arr[], int n);

int main(){
    int arr[size];
    int choice, pos, value, n = 0;

    while(1){
        printf("\nPress(1. Insert | 2. Delete | 3. Display | 4. Exit): ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                printf("Enter the position: ");
                scanf("%d", &pos);
                printf("Enter the value: ");
                scanf("%d", &value);
                insert(arr, n, pos, value);
                n++;
                break;
            
            case 2:
                printf("Enter the position: ");
                scanf("%d", &pos);
                delete(arr, pos, n);
                n--;
                break;
            
            case 3:
                display(arr, n);
                break;

            case 4:
                exit(0);

            default:
                printf("Invalid Choice");
        }
    }

    return 0;
}

void insert(int arr[], int n, int pos, int value){
    if(pos < 1 || pos > n+1){
        printf("Invalid Positon");
        return;
    }
    if(n == 0){
        arr[pos-1] = value;
        return;
    }
    if(pos == n+2){
        arr[pos-1] = value;
        return;
    }

    for(int i = n; i<pos; i++){
            arr[i+1] = arr[i];
        }
    arr[pos-1] = value;
}


void delete(int arr[], int pos, int n){
    if(pos < 1 || pos > n){
        printf("Invalid Positon");
        return;
    }
    for(int i = pos-1; i<n; i++){
        arr[i] = arr[i+1];
    }
}


void display(int arr[], int n){
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
}