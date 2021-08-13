/* There is a series, , where the next term is the sum of pervious three terms. Given the first three terms of the series, , ,
and  respectively, you have to output the nth term of the series using recursion.*/
#include <stdio.h>
int find_nth_term(int n, int a, int b, int c) {
  //Write your code here.
   if(n == 1) return a;
    if(n == 2) return b;
    if(n == 3) return c;
    return find_nth_term(n-1, a, b, c) + find_nth_term(n-2, a, b, c) + find_nth_term(n-3, a, b, c);
   }
int main() {
    int n, a, b, c;
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
    printf("%d", ans);
    return 0;
}

