#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    int sum = 0;
    printf("Enter the size");
    scanf("%d",&n);
    
    int *p = (int*)malloc(n * sizeof(int));
    
    for(int i = 0;i < n;i++){
        printf("Enter the elements");
        scanf("%d",(p + i));
    }
    
    for(int i = 0;i < n;i++){
        
        sum += *(p + i);
        
    }
    printf("%d",sum);
    

    return 0;
}
