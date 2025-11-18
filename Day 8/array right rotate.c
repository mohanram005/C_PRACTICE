#include <stdio.h>

int main() {
    // Write C code here
    int arr[] = {1,2,3,4,5,6};
    
    for(int i = 0;i < 2;i++){
        
        int last = arr[5];//last value store there it continune for another cycle also
        
        for(int j = 5; j > 0;j--){
            arr[j] = arr[j - 1]; // freeup the first index
        }
        arr[0] = last; // add to the last to the first 
        
        
        
    }
    
    for(int i = 0;i < 5;i++){
         printf("right array %d\n",arr[i]);
    }
    
    printf("Try programiz.pro");

    return 0;
}
