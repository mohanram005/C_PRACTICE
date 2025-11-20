#include<stdio.h>

int main(){
    int a = 10;
    
    int *p = &a;
    
    printf("value of a %d\n",a);
    printf("address of a %p\n",&a);
    printf("value stored in p address of a %p\n",p);
    printf("value inside the pointed %d",*p);
    
    
}
