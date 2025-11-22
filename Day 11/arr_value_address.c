#include <stdio.h>

int main() {
    
    int arr[] = {1,2,3,4,5};
    int *p = arr;
    
    for(int i = 0;i < 5;i++){
        printf("the value of array %d\n",*(p + i));
        printf("the value address is %p\n",(p+i));
    }

    return 0;
}
