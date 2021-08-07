/*recursion problem of 1 to n and n to 1*/

#include<stdio.h>
#include<cs50.h>

int number(int k)
{   
    int n=1;
    while(n<k){
        printf("%d", n);
        n++;
    }
    return n;

}

int main(void){
    int n, i, recieved;
    printf("Enter the number till to go");
    scanf("%d", &n);
    recieved = number(n);
    printf("%d", recieved);
    
    return 0;
}
