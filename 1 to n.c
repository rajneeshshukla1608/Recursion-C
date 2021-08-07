/*recursion problem of n to 1*/

#include<stdio.h>

void number(int k)
{   
    if(k<=0)
    return;

    printf("%d",k);
    number(k - 1);
}

int main(void){
    int n, i, recieved;
    printf("Enter the number till to go");
    scanf("%d", &n);
    number(n);
    return 0;
}
