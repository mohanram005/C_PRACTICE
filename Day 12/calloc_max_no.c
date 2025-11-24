#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    int max = 0;
    printf("Enter the size");
    scanf("%d",&n);
    
    int *p = (int*)calloc(n,sizeof(int));
    
    for(int i = 0;i < n;i++){
        printf("Enter the elements");
        scanf("%d",(p + i));
    }
    
    for(int i = 0;i < n;i++){
      
      if(*(p + i) > max){
          max = *(p + i);
      }    
    
        
    }
    printf("%d",max);
    
    free(p); //prevent from memory leak 
    return 0;
}
