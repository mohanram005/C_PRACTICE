#include <stdio.h>


void swap(int *x,int *y){
    int temp = *x; // if the comming value is address then the getting is pointer 
    *x = *y;
    *y = temp;
}


int main() {
    int a = 5; int b = 10;
    printf("before swap a = %d ,b = %d\n",a,b);
    swap(&a,&b); // give the address then only it can find the value for function
    printf("After swap a = %d ,b = %d\n",a,b);
    

    return 0;
}
