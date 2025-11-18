#include <stdio.h>
//set arr and  n

void sumof(int arr[],int n){
    
    for(int i = 0;i < n;i++){
        
        for(int j = i+1;j < n;j++){
            if(arr[i] + arr[j] == 6){
                printf("the pair is (%d,%d)\n",arr[i],arr[j]);
            } 
        }
    }
    
}

int main() {
    // Write C code here
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    sumof(arr,n);

    return 0;
}
