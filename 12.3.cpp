#include <stdio.h>

int fac(int n) {
    if(n == 0) return 1;      
    else return n * fac(n-1); 
}

int fib(int n) {
    if(n == 0) return 0;      
    else if(n == 1) return 1;  
    else return fib(n-1) + fib(n-2); 
}

int main() {
    printf("fac(5) = %d\n", fac(5));  
    printf("fib(7) = %d\n", fib(7));   
    return 0;
}

