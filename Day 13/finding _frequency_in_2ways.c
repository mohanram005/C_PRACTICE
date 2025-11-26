//normal
#include <stdio.h>

int main() {
    // Write C code here
    char name[] = "banana";
    char check[256] = {0};
    int count;
    
    for(int i = 0; name[i] != '\0';i++){
        if(check[(unsigned char)name[i]] == 1)
        continue;
        
        count = 0;
        
        for(int j = 0; name[j] != '\0';j++){
            if(name[i] == name[j]){
            count ++;
                
            }
            
        }
        printf("%c = %d\n",name[i],count);
        check[(unsigned char)name[i]] = 1;
        
    }
    // printf("the value of count %d",count);
    // printf("Try programiz.pro");

    return 0;
}
//Asic level

#include <stdio.h>

int main() {
    // Write C code here
    char name[] = "banana";
    char check[256] = {0};
    //int count;
    
    for(int i = 0;name[i] != '\0';i++){
        check[name[i]]++; // count the value in asic condition
    }
    
    for(int i = 0;name[i] != '\0';i++){
        if(check[name[i]] != 0){
            printf("%c = %d\n",name[i],check[name[i]]);
            check[name[i]] = 0;
        }
    }
   
    // printf("the value of count %d",count);
    // printf("Try programiz.pro");

    return 0;
}
