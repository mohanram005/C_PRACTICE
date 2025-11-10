//Count even and odd numbers in an array

//Input an array and count how many numbers are even and how many are odd.
#include <stdio.h>

int main() {
    
    int even = 0;
    int odd = 0;
    
    int a[5] = {1,2,3,4,5};
    for(int i = 0; i < 5; i++){
        
        if(a[i] % 2 == 0){
            even++;
        }
        else{
            odd++;
        }
        
    }
    printf("even no. is %d\n",even);
    printf("odd no. is %d\n",odd);

    return 0;
}



/Reverse an array

//Print the elements of an array in reverse order without changing the original array.
#include <stdio.h>

int main() {
    
    int a[5] = {1,2,3,4,5};
    
    for(int i = 4;i >= 0;i--){
        
        printf("the revese order is %d\n",a[i]);
        
    }

    return 0;
}
