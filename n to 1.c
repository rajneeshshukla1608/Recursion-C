/*Recursion problem of 1 to n*/


#include<stdio.h>
void number(int k)
{   
    if(k<=0)
    return;

    number(k - 1);
    printf("%d",k);

}
int main(void){
    int n, i, recieved;
    printf("Enter the number till to go");
    scanf("%d", &n);
    number(n);
    return 0;
}
