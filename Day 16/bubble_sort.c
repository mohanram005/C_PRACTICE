// 👉 Compare adjacent elements and swap if needed.

// Logic

// Think of bubbles rising to the top — biggest element moves to the last position in each pass.

// After each outer loop, one element is in correct position

#include <stdio.h>
void bubble(int arr[],int n){ // moving the higher element to the last
    
    for(int i = 0;i < n -1;i++){
        
        for(int j = 0;j < n -i-1;j++){ //1st = 0 to 4
            if(arr[j] > arr[j + 1]){  //2st 0 to 3
                int temp = arr[j]; // last 0 to 1
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    
    
}




int main() {
    
    int arr[] = {5,3,2,7,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    bubble(arr,n);
    
    for(int i = 0;i < n;i++){
        printf("%d\n",arr[i]);
    }

   
    return 0;
}
