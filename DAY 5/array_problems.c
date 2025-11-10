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




//Copy one array into another Copy all elements of array A into array B using a loop
#include <stdio.h>

int main() {
    // Write C code here
    int a[5] = {1,2,3,4,5};
    int b[5];
    for(int i = 0;i <5;i ++){
        b[i] = a[i];
        printf("b array is %d\n",b[i]);
    }
    
    printf("Try programiz.pro");

    return 0;
}

//Compare two arrays Check if two arrays are exactly the same (same elements, different order).
#include <stdio.h>

int main() {
    // Write C code here
    int a[5] = {1,2,3,4,5};
    int b[5] = {1,2,3,4,5};
    int count = 0;
    for(int i = 0;i < 5;i ++){
        
        for(int j = 0;j < 5;j++){
            if(a[i] == b[j])
            {
                count++;
                break;
               
            }
        }
        
        printf("%d\n",count);
        
        
    }
    if(count == 5){
        printf("same array");
    }else{
        printf("not a same array");
    }
    
    printf("Try programiz.pro");

    return 0;
}









