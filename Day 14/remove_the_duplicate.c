// 6️⃣ Remove duplicate characters from a string

// Input: "hello"
// Output: "helo"

//✔ Maintain visited array manually.
#include <stdio.h>

int main() {
    // Write C code here
    
    char str[] = "hello";
    
    for(int i = 0; str[i] != '\0';i++){
        for(int j = i + 1;str[j] != '\0';j++){
            if(str[i] == str[j]){
                printf("duplicate is %c\n",str[j]);
                
                //move till the end 
                //mistake made in the not moving it to the last 
                int k = j;
                while(str[k] != '\0' ){
                str[k] = str[k+1];
                k++;
                }
                j--;  // important! check the new character at j
            }
        }
    }
    printf("%s",str);

    return 0;
}
