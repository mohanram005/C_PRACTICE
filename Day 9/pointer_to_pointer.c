// printing arrays based on address
// int x = 50;
// int *ptr = &x;
// int **pptr = &ptr;

// Print:
// 1) value of x
// 2) value using *ptr
// 3) value using **pptr
// 4) address of x
// 5) address stored in ptr
// 6) address stored in pptr


#include<stdio.h>

int main(){
    
    int x =50;
    int *ptr = &x;
    int **pptr = &ptr;
    
    printf("the value of x %d\n",x);
    printf("value using *ptr %d\n",*ptr);
    printf("value using **pptr %d\n",**pptr);
    printf("address of x %p\n",&x);
    printf("address stored in ptr %p\n",ptr);
    printf("address stored in pptrr %p\n",pptr);
    
    
    
    
    
    return 0;
}
