//Print numbers 1 to 10 using a while loop

#include<stdio.h>

int main(){
    int i = 1;
    
    while(i <= 10){
        printf("%d\n",i);
        i++;
    }
    return 0;
}


//Sum of first 10 natural numbers using while.

#include<stdio.h>

int main(){
    int i = 1;
     int sum = 0;
    while(i <= 10){
        printf("%d\n",i);
        
        sum = sum + i;
        i++;
    }
    printf("%d\n",sum);
    return 0;
}


// Print even numbers between 1 and 20 using while.

#include<stdio.h>

int main(){
    int i = 1;
     int sum = 0;
    while(i <= 20){
      
        if(i%2 == 0){
            printf("%d\n",i);
        }
        i++;
    }
   
    return 0;


}
//Count digits in a given number using while.


#include<stdio.h>

int main(){
    int i = 1;
     int count = 0;
    while(i <= 20){
      
     
         int num = i % 10;
         if(num >= 1){
             count++;
         }
     i++;   
    }
    printf("%d\n",count);
       
       return 0;
    }
 





