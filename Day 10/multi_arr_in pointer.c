#include <stdio.h>

void multi(int *p){
    for(int i = 0;i < 5;i++){
        *(p + i) = *(p + i) * 2; //giving the reference to the pointer to address the value 
    }
}



int main() {
    int arr[] = {1,2,3,4,5};
    for(int i = 0;i < 5;i++){
        printf("the before sending is %d\n",arr[i]);
    }
    multi(arr);
    
    for(int i = 0;i < 5;i++){
        printf("the array is %d\n",arr[i]);
    }

    return 0;
}
