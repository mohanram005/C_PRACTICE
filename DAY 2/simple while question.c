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
 
//Input a number and find the sum of its digits using a while loop.
//Example: 1234 → 10
//num % 10 = last number 
//sum = sum + num;
//num/10 eleminate the last no.
//til num = 0;


#include <stdio.h>

int main() {
    // Write C code here
     int i = 1234;
    int num;
    int sum = 0;
    while(num != 0){
        num = i % 10; //get last
        sum = sum + num; //sum
        i = i/10;// eliminate last
    
    }
    printf("%d\n",sum);

    return 0;
}


//Reverse a number
//Input a number and print its reverse using a while loop.
//Example: 1234 → 4321


#include <stdio.h>

int main() {
    // Write C code here
     int i = 1234;
    int num;
    int remainder = 0;
    while(i != 0){
        num = i % 10; //get last
        remainder = (remainder*10) + num; //sum
        i = i/10;// eliminate last
    
    }
    printf("%d\n",remainder);

    return 0;
}

//PALINDRONE 
#include <stdio.h>

int main() {
    // Write C code here
     int i = 121;
     int num1 = i;
    int num;
    int remainder = 0;
    
    while(i != 0){
        num = i % 10; //get last
        remainder = (remainder*10) + num; //sum
        i = i/10;// eliminate last

    
    }
    
    printf("%d\n",remainder);
    if(num1 == remainder){
        printf("it is palindrome\n");
    }
    else{
        printf("not palindrone\n");
    }
    
    

    return 0;
}


//Input a number n, and find its factorial using a while loop.
//Example: 5 → 120
#include <stdio.h>

int main() {
    
    int i = 1;
    int fact = 1;
    // Write C code here
   while(i <= 5){
       fact = fact * i;
       
       i++;
       
   }
   printf("%d\n",fact);
  

    return 0;
}




//(0,1,1,2,3,5,8,13,21,34,\dots \). To find the next number, you simply add the last two //numbers together (e.g., \(1+1=2\), \(1+2=3\), \(2+3=5\))
#include<stdio.h>
int i = 0;
int fibbo = 0;

int n1 = 0;
int n2  = 1;
int main(){
    while(i <= 10){
        
        
        fibbo = n1 + n2;
        n1 = n2;
        n2 = fibbo;
  
        printf("%d\n",fibbo);
        i++;
    }
    return 0;
}

//armstrong no.
#include <stdio.h>
#include <math.h>



int main() {
    // Write C code here
    int i = 153;
    int backup = i;
    int num;
    int arm = 0;
    int count = 0;
    
    int temp = i;
    while(temp != 0){
        count ++;
        temp = temp/10;
    }
    
    
     temp = i;
     while(temp != 0){
         
         int digit = temp % 10;
         arm += pow(digit,count);
         temp = temp /10;
     }
    if( i == arm){
        printf("the given is armstrong");
    }else{
        printf("the given is not a armstrong");
    }
     return 0;
}


//power without pow function
#include<stdio.h>

int main(){
    int i = 0;
    int base;
    int expo;
    int   power = 1;
    printf("give the base value\n");
    scanf("%d",&base);
    
    printf("give the expo value\n");
    scanf("%d",&expo);
    
    //int n2 = base;
    while(i < expo){
        power = power * base;
       
        i++;
    }
    //printf("%u\n",sizeof(expo));
    printf("%lld\n",power);
    
    
    return 0;
}



//gcd
#include<stdio.h>

int main(){
    
    int a = 30;
    int b = 15;
    int i = 1;
    int gcd = 1;
    int min;
    
    min = (a < b) ? a : b; 
    
    while(i <= min){
        
        if(a % i == 0 && b % i == 0){
            
            gcd = i;
        }
        
        i++;
    }
    printf("%d\n",gcd);
    
    
    
    return 0;
}












