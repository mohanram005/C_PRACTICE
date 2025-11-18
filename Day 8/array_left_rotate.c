#include <stdio.h>

int main() {
    // Write C code here
    int arr[] = {1,2,3,4,5,6};
    int d = 2;
    int n = sizeof(arr)/sizeof(arr[0]);
    
    for(int i = 0;i < d;i++){
        
        int last = arr[0];//1 last //last value store there it continune for another cycle also
        
        for(int j = 0; j < 5;j++){
            arr[j] = arr[j + 1]; // freeup the first index
        }
        arr[n-1] = last; // add to the last to the first 
        
        
        
    }
    
    for(int i = 0;i < 6;i++){
         printf("right array %d\n",arr[i]);
    }
    
    printf("Try programiz.pro");

    return 0;
}
