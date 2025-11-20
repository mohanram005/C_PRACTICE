#include <stdio.h>

int sum_array(int *p ,int n){
    int sum = 0;
    for(int i = 0;i < n;i++){
    sum += *(p + i); 
    }
     return sum;
}

int main() {
    int arr[] = {10, 20, 30};
    int size = sizeof(arr)/sizeof(arr[0]);

    int result = sum_array(arr,size);

    printf("%d",result);   // Output: 999
}
