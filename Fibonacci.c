/*Fibonacci series*/


#include<stdio.h>

int fibonacci(int n){

    if(n==0 || n==1){
        return n;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}

int main(){
  int n, s;
  scanf("%d", &n);
 s =  fibonacci(n);
 printf("%d", s);
 return 0;
}
