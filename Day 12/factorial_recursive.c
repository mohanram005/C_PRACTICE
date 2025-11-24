#include<stdio.h>

int fact(int n) {
    if (n == 0)
        return 1;      // base case

 return n * fact(n - 1);    // recursive cal
}

int main() {
    int result = fact(5);
    printf("%d",result);
}
