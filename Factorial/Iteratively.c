/*
Iterative method of factorial of any given number iteratively
*/

#include<stdio.h>
#include<cs50.h>

int factorial(int n){
 int lap = 1, i;
    for (i = 2; i <= n; i++)
        lap *= i;
    return lap;
}

int main(void){
    
    int n, s;
    scanf("%d", &n);

    s = factorial(n);
    printf(" your iterative method of finding the fctorial is %d", s);
    
}
 
