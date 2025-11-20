#include <stdio.h>

int main() {
    
    int a = 10;
    
    int *p = &a;
    
    printf("the value of the %p\n",p);
    p++;
    printf("the value in p++ %p\n",p);
    p--;
    printf("the value after p-- %p\n",p);
    

    return 0;
}
