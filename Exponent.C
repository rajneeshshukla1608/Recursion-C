/*This repo consist of exponent problem in recursion with two mwthodss one for even and odd and second in direct for every number even or odd*/
//Method 1-
#include<stdio.h>
#include<conio.h>
int expo(int e){

   int result;
   if(e == 0){
     return 1;
   }else if(e%2==0){
      return 2*expo(e-1);
   }else{
     result = expo(e/2);
     return result*result*2;
   }

      //Method 2-
      /* if(e==0){
      return 1;
      }else{
      return 2*expo(e-1);
      }*/
}

int main(void){
    int n;
    scanf("%d",&n);
   printf("%d", expo(n));
   getch();

    return 0;
}
