//swap two no. using pointer 
#include <stdio.h>
void swap(int *x,int *y){
    
    int temp = *x;
    *x = *y;
    *y = temp;
    
}
int main() {
    int a = 5;
    int b = 10;
    
    swap(&a,&b); //keep in mind when you use pointer you give address of the number to change 
    //give the address of the number
    printf("a = %d,b = %d",a,b);
    
    
    
    return 0;
}
