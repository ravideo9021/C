//program to merge two sorted arrays into a single sorted array

#include <stdio.h>
#include <stdlib.h>

//meging the two sorted arrays
void sort(int nums[], int l, int m, int h){  
    int i = l, j = m+1, k = 0;
    int *b = (int *)malloc((h-l+1)*sizeof(int)); //creating a temporary array to store the sorted array
    if (b == NULL){    //checking if the memory is allocated or not
        printf("Memory not allocated");
        exit(0);
    }
    while(i <= m && j <= h){   //comparing the two arrays and storing the smaller element in the temporary array  
        if(nums[i] < nums[j]){
            b[k] = nums[i];
            i++, k++;
        }else{
            b[k] = nums[j];
            j++, k++;
        }
    }
    while(i <= m){      //if the first array is not completely traversed
        b[k] = nums[i];
        i++, j++;
    }
    while(j <= h){     //if the second array is not completely traversed
        b[k] = nums[j];
        j++, k++;
    }
    k = 0;
    for(int i = l; i <= h; i++){
        nums[i] = b[k];
        k++;
    }
    free(b);
}

void mergeSort(int nums[], int l, int h){  //merge short algorithm
    if(l < h){
        int mid = l + (h-l)/2;
        mergeSort(nums, l, mid);  
        mergeSort(nums, mid+1, h);
        sort(nums, l, mid, h);  //merging the array
    }
}

//function to merge two sorted arrays into a single sorted array
void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int nums[m+n];  //storing the two arrays into a single array nums
    int i = 0, j = 0;
    for (i = 0; i < m+n; i++){
        if(i > m){
            nums[i] = nums1[i];
        }else{
            nums[i] = nums2[j];
            j++;
        }
    }
    mergeSort(nums, 0, m+n-1); 
    for(int i = 0; i < m+n; i++){
        nums1[i] = nums[i];
    }
}

int main(void){
    int nums1[] = {1, 2, 3, 0, 0, 0};
    int nums2[] = {2, 5, 6};
    int m = 3, n = 3;
    merge(nums1, 6, m, nums2, 3, n); 
    for(int i = 0; i < 6; i++){
        printf("%d\t", nums1[i]);
    }
    return 0;
}