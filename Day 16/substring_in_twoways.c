// 1️⃣3️⃣ Print all substrings of a string

// Input: "abc"
// Output:
// a
// ab
// abc
// b
// bc
// c

// ✔ 2 loops.
#include <stdio.h>

int main() {
   
   char str[] = "abc";
   int n = 0;

//WITH THE  WHILE LOOP
   while(n < 3){
   for(int i = n;i < 3;i++){ //1
       
       for(int j = n;j < i+1;j++){
           printf("%c",str[j]);
           
       }
       printf("\n");
   }
   n++;
   }

   return 0;
}

#include <stdio.h>

int main() {
    char str[] = "abc";

    for (int start = 0; str[start] != '\0'; start++) {
        for (int end = start; str[end] != '\0'; end++) {

            // print substring from start → end
            for (int k = start; k <= end; k++) {
                printf("%c", str[k]);
            }
            printf("\n");
        }
    }
    return 0;
}

