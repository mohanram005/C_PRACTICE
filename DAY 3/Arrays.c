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
