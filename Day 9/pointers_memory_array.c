#include <stdio.h>

int main() {
    
    int arr[] = {10,20,30};
    
    int *p = arr;
    
    printf("the 1st arrdress value of array %d\n",*p);
    printf("the 1st arrdress value of array %p\n",p);
    
    printf("the 2 st address valur of array %d\n",*(p+1));
    printf("the 2 st address valur of array %p\n",(p+1));
    
    printf("the 3 st address valur of array %d\n",*(p+2));
    printf("the 3 st address valur of array %p\n",(p+2));
    
    printf("the 4 st address valur of array %d\n",*(p+3)); //this is unbounded memory array 
    //gives a garbage value 
    printf("the 4 st address valur of array %p\n",(p+3));
    
    
    

    return 0;
}
