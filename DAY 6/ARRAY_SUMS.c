//merge array


#include <stdio.h>

int main(){
    
    int a[] = {1,2,3,4,5,7,8,9};
    int b[] = {6,7,8};
    int size_a = sizeof(a)/sizeof(a[0]);
    int size_b = sizeof(b)/sizeof(b[0]);
    int c[size_a + size_b];
    int i;
    for( i = 0;i < size_a;i++){
        
        c[i] = a[i];
        
    }
    
    for(int j = 0;j < size_b;j++){
        c[i + j] = b[j];
    }
    
    for(int k = 0;k < 8;k++){
        printf("%d\n",c[k]);
    }
    

    return 0;
}
