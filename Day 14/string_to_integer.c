#include <stdio.h>

int main() {
    // Write C code here
    
    char str[] = "1234";
    int num = 0;
    
    for(int i = 0;str[i] != '\0';i++){
        
        if(str[i] < '0' || str[i] > '9'){
            break;
        }
        int dight = str[i] - '0';
        
        num = num * 10 + dight;
        
        //printf("%d\n",num);
    }
    printf("%d",num);
    
    
    

    return 0;
}





#include <stdio.h>

int my_atoi(char str[]) {
    int result = 0;

    for (int i = 0; str[i] != '\0'; i++) {

        // stop at non-digit
        if (str[i] < '0' || str[i] > '9') {
            break;
        }

        int digit = str[i] - '0';   // convert char -> integer
        result = result * 10 + digit;
    }

    return result;
}

int main() {
    char str[] = "1234";
    int num = my_atoi(str);

    printf("Converted number = %d\n", num);

    return 0;
}
