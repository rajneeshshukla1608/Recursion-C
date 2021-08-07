/*recursion problem of n to 1 and n to 1*/

#include<stdio.h>
#include<cs50.h>

int number(int k)
{   
    while(k!=1){
     printf("%d", k);
     return number(k-1);
                 }
                 
    return k;
}


int main(void){
    int n, i, recieved;
    printf("Enter the number till to go");
    scanf("%d", &n);
    recieved = number(n);
    printf("%d", recieved);
    
    return 0;
}
