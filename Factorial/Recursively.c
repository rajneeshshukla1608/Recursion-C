/*factorial of a given number */

#include<stdio.h>

int factorial(int n){
     if(n<=1){
      return 1;
     }else{
       return n*factorial(n-1);
     }

}

int main(){
  int n, s;
  scanf("%d", &n);

 s =  factorial(n);
 printf("%d", s);
 return 0;
}
