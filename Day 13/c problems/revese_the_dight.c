//Reverse a number without using extra array or string

//Input: 12345
//Output: 54321

#include<stdio.h>

int main(){
    int ldight = 0;
    int rev = 0;
    int num = 12345;
    
    while(num != 0){
    ldight = num % 10;
    rev = (rev * 10) + ldight;
    num = num/10;
    }
    
    printf("the revese of dight is %d",rev);
    
    
    
    return 0;
}
