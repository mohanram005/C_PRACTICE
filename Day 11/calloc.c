#include<stdio.h>
#include<stdlib.h>

int main(){
    
    int n;
    printf("enter the size:");
    scanf("%d",&n);
    
    int *p = (int*)calloc(n,sizeof(int));
    // set default zero
    if(p == NULL){
        printf("the memory not allocated");
    }
    
    for(int i = 0;i < n;i++){
        printf("enter the value:");
        scanf("%d",(p + i));
        
    }
    
    for(int i = 0;i < n;i++){
        printf("the value is %d\n",*(p + i));
    }
    
    return 0;
}
