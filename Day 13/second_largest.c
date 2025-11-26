// 4️⃣ Find second smallest element in an array

// ✔ No sorting allowed
// ✔ Only one scan or two scans
#include <stdio.h>

int main() {
    
    int arr[]= {1,2,3,4,5};
    int largest;
    int sec_largest;
    
    if(arr[0] > arr[1]){
        largest = arr[0];
        sec_largest = arr[1];
    }else{
        largest = arr[1];
        sec_largest = arr[0];
    }
    for(int i = 0;i < 5;i++){
        if(arr[i] > largest){
            sec_largest = largest;
            largest = arr[i];
            
        }
        else if(arr[i] > sec_largest && arr[i] != largest){
        sec_largest = arr[i];    
        }
       
    }
     printf("the sec largest is %d",sec_largest);
    return 0;
}
