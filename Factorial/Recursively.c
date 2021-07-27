/*
Recursive method of factorial of a given number 
*/
#include<stdio.h>
#include<cs50.h>

int factorial(int n){
 
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}

int main(void){
    
    int n, s;
    scanf("%d", &n);
    
    s = factorial(n);
    
    printf(" your factorial of the fiven number using recursuve method is  = %d", s);
}
