#include <stdio.h>
int main(){
    int n;
    
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    
    for(int i=0; i<n; i++){
        printf("enter the number %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    
    for (int j=0; j<n-1; j++){
        for (int i=0; i<n-1; i++){
             if (arr[i]>arr[i+1]){
                int t = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = t;        
            }
        }
    }
    printf("the second largest number in the given array is: %d", arr[n-2]);

return 0;
}