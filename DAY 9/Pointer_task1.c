#include<stdio.h>

int main(){
    
    int x = 10;
    int *p = &x;
    
    printf("1) value of x = %d\n", x);
    printf("2) address of x = %p\n", p);
    printf("3) value stored inside ptr (address) = %p\n", p);
    printf("4) value pointed by ptr (*p) = %d\n", *p);

    return 0;
}


1) value of x = 10
2) address of x = 0x7ffc6032b174
3) value stored inside ptr (address) = 0x7ffc6032b174
4) value pointed by ptr (*p) = 10
