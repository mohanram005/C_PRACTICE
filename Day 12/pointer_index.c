#include<stdio.h>

int main(){
    
    char *name[] = {"ram","sam","abi"};
    
    for(int i = 0;i < 3;i++){
        printf("%s\n", name[i]);
    }
    //each pointer store a address of each string so no need of seaprate index
    
    
    return 0;
}
