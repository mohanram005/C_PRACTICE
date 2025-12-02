// ✅ What is Binary Search?

// Binary Search is an algorithm to find an element in a sorted array by repeatedly dividing the search range into half.
//NEED A SORTED ARRAY FOR THIS SEARCH

#include <stdio.h>

int binary_sec(int arr[],int n,int key){
    
    int left = 0;
    int right = n-1 ;
    
    while(left <= right){
        
        int mid = (left + right)/2;
        
        if(arr[mid] == key)
        return mid;  // it going to give the answer 
        
        if(arr[mid] < key){
            left = mid + 1;
            
        }else{
            right = mid -1; // based on this the upper condition for mid
        }
        
    }
    return -1;
    
}
int main() {
    // Write C code here
    
    int arr[] = {10,20,30,40,50,60,70,80,90,100};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key  = 100;
    int result;
    
    result = binary_sec(arr,n,key);
    printf("%d",result);
   

    return 0;
}
