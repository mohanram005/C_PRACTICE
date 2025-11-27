#include <stdio.h>

int main() {
    // Write C code here
    
    int arr = 1234;
    char str[20];
    int i = 0;
    int digit = 0;
    //if(arr == 0){
        
        //str[i++] = '0';
        //str[i] = '\0';
    //}
    
    while(arr > 0){
        digit = arr % 10;
        str[i++] = digit + '0'; // plus '0' for make it string + 48// in asiic 0 = 48
        arr = arr/10;
    }
    
    //printf("%s",str);
    str[i] = '\0';
    
    
    int left = 0;
    int right = i - 1;
    
    while(left < right){
    char temp = str[right];
    str[right] = str[left];
    str[left] = temp;
    
    left++;
    right--;
    }
    
    printf("%s",str);
    
    return 0;
}
