//Copy string using pointers

#include <stdio.h>

int main() {
    
    char name[] = {"john"};
    char copy[10];
    
    char *p = name;
    char *q = copy;
    
    while(*p != '\0'){
        *q = *p;
        p++;
        q++;
        //printf("the value of p %c\n",*p);
        //printf("the value of q %c\n",*q);
    }
printf("the value of q %s\n",copy);
    return 0;
}
