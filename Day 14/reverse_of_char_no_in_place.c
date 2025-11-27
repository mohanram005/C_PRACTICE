#include <stdio.h>

void rev(char str[],int n){
    
    if(str[n] == '\0'){ //base class
        return;
    }
    printf("%c\n",str[n]); //straight 
    rev(str,n + 1);
    printf("%c\n",str[n]);//reverse
    
}


int main() {
    // Write C code here
    char str[] = "jhon";
    rev(str,0);
    

    return 0;
}
