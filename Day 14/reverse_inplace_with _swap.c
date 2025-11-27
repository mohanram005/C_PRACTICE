// 5️⃣ Reverse a string using recursion

// ✔ Already doing this.
// ✔ Zoho usually asks to reverse in-place.
//left
#include <stdio.h>

void rev(char str[],int left,int right){
    
    if(left >= right){ //base class
        return;
    }
    
    char temp = str[left];
    str[left] = str[right];
    str[right] = temp; //last value come as a output of finial
    
    
 
    rev(str,left +1,right - 1);
    
}


int main() {
    // Write C code here
    char str[] = "jhon";
    
    int len = 0;
    while(str[len] != '\0'){
    len++;
    }
    
    printf("%d\n",len);
    
    rev(str,0,len - 1);
    
    printf("%s\n",str);

    return 0;
}
