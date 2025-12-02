// ✅ 3. Insertion Sort

// 👉 Insert element in correct place in sorted left side.

// Logic

// Left side sorted, right side unsorted.

// Take one element from right and insert at correct position in left.
#include <stdio.h>

void insertion(int arr[],int n){
    for(int i = 1;i < n;i++){
        int key = arr[i];
        int j = i -1;
        
        while(j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
    
}


int main() {
    // Write C code here
    
    int arr[] = {4,5,6,9,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    insertion(arr,n);
    //printf("%d",n);
    for(int i = 0;i < n;i++){
        printf("%d",arr[i]);
    }

    return 0;
}
