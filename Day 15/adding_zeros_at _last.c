// 🔟 Move all zeros to end of array without changing order 
// Input: 1 0 2 0 3 0 // Output: 1 2 3 0 0 0

#include <stdio.h>

int main() {
    int arr[] = {1,0,2,0,3,0,4,0,5,0,6,0};
    //int n = 8;
    int n = sizeof(arr)/sizeof(arr[0]);
    

    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {

            // shift elements left
            for (int k = i; k < n - 1; k++) {
                arr[k] = arr[k + 1];
            }

            arr[n - 1] = 0;   // place zero at end
                     // stay at same index to check the new element
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}


// 🔟 Move all zeros to end of array without changing order 
// Input: 1 0 2 0 3 0 // Output: 1 2 3 0 0 0

#include <stdio.h>

int main() {
    int arr[] = {1,0,2,0,3,0,4,0,5,0,6,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    

    int pos = 0;
    
    for(int i = 0;i < n;i++){
        if(arr[i] != 0){
            arr[pos++] = arr[i];
        }
    }
    
    while(pos < n){
        arr[pos++] = 0;
    }
    
    for(int i = 0;i < n;i++){
        printf("%d",arr[i]);
    }

    return 0;
}
