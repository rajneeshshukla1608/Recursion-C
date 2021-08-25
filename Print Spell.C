#include<stdio.h>
#include<conio.h>

char arr[10][6] = {"Zero" , "One" , "Two",
		   "Three", "Four", "Five",
		   "Six", "Seven","Eight", "Nine"};

void spell(int k){
    int n;
    n = k % 10;
    if (k / 10 != 0)
	spell(k / 10);
    printf("%s  ",arr[n]);
}


int main(){
   int n;
   clrscr();
   printf("Enter the number to find the spelling: ");
   scanf("%d", &n);
   spell(n);
   getch();
   return 0;
}
