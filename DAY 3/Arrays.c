#include <stdio.h>

int main() {
    // Write C code here
     int array[5];
    for(int i = 0;i < 5;i++){
      printf("enter\n",i);
      scanf("%d\n",&array[i]); 
    }

  int index = 0;
   
   
  do{
       
      printf("index %d and element is %d\n",index,array[index]);
      index++;
  }while(index < 5);

    return 0;
}


//copy array with library

#include <stdio.h>
#include <string.h>
int main() {
    
    int a[5] = {10,20,30,40,50};
    int b[5];
    
    memcpy(b, a,sizeof(a));
    
    for(int i = 0;i < 5;i++){
    
        printf("%d\n",b[i]);
    }
    return 0;
}

//without copy function

#include <stdio.h>

int main() {
    
    int a[5] = {10,20,30,40,50};
    int b[5];
    
    for(int i = 0;i < 5;i++){
        b[i] = a[i];
        
    }
    
    for(int j = 0;j < 5;j++){
        printf("%d\n",b[j]);
    }
    return 0;
}





//average of array in float

#include <stdio.h>

int main() {
    int size = 5;
    signed int a[size];  // declare empty array
    float sum = 0;
    float average;

    // manually fill elements
    a[0] = 13;
    a[1] = 5;
    a[2] = -1;
    a[3] = 8;
    a[4] = 17;

    for (int i = 0; i < size; i++) {
        
        sum += a[i];
        printf("%d\n", a[i]);
    }
    printf("%f\n",sum);
    average = sum/size;
    printf("%f\n",average);

    return 0;
}

//second largest


#include <stdio.h>

int main() {
    int size = 5;
    signed int a[size];  // declare empty array

    // manually fill elements
    a[0] = 10;
    a[1] = 20;
    a[2] = -1;
    a[3] = 40;
    a[4] = 50;
    
    int largest;
    int sec_largest;
    int i;
    if(a[0] > a[1]){
        
        largest = a[0];
        sec_largest = a[1];
    }
    else{
        largest = a[1];
        sec_largest = a[0];
    }
    
    for(int i = 2; i < size ; i++){
        
        if(a[i] > largest){
        sec_largest = largest;
        largest = a[i];
        }
        else if (a[i] > sec_largest && a[i] != largest) {
            sec_largest = a[i];
    }
        
    }
    
    printf("%d\n",largest);
    printf("%d\n",sec_largest);
    
    
    
    // printf("%f\n",sum);
    // average = sum/size;
    // printf("%f\n",average);

    return 0;
}
