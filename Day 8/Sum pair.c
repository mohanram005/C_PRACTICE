//Find pair of elements whose sum equals a given number

//Example: In {1,2,3,4,5}, find pairs whose sum = 6 → (1,5), (2,4)..


#include <stdio.h>

int main() {
    // Write C code here
    int arr[] = {1,2,3,4,5};
    
    for(int i = 0;i < 5;i++){
        
        for(int j = i+1;j < 5;j++){
            if(arr[i] + arr[j] == 6){
                printf("the pair is (%d,%d)\n",arr[i],arr[j]);
            }
        }
    }
    
    
    printf("Try programiz.pro");

    return 0;
}
