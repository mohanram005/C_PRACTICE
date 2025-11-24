#include <stdio.h>

int fib(int n) {
    if (n == 0) return 0;  // base case
    if (n == 1) return 1;  // base case
    
    return fib(n - 1) + fib(n - 2);  // recursive call
}

int main() {
    int n = 5;
    for (int i = 0; i < n; i++)
        printf("%d ", fib(i));
}

fib(5) = fib(4) + fib(3)
fib(4) = fib(3) + fib(2)
fib(3) = fib(2) + fib(1)
fib(2) = fib(1) + fib(0)

  fib(1) = 1
fib(0) = 0

fib(2) = fib(1) + fib(0)
       = 1 + 0
       = 1

  

fib(3) = fib(2) + fib(1)
       = 1 + 1
       = 2
fib(4) = fib(3) + fib(2)
       = 2 + 1
       = 3

fib(5) = fib(4) + fib(3)
       = 3 + 2
       = 5
fib(5) = 5
  



