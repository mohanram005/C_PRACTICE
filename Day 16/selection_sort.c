// 👉 Select the smallest element and place it in correct position.

// Logic

// Find the minimum in the remaining array.

// Swap with current index.


#include <stdio.h>

void selection(int arr[],int n){
    int min;
    for(int i = 0;i < n-1;i++){
        min = i;
        
        for(int j = i+1;j < n -1;j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}




int main() {
    
    int arr[] = {5,3,2,7,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    selection(arr,n);
    
    for(int i = 0;i < n;i++){
        printf("%d\n",arr[i]);
    }

   
    return 0;
}
