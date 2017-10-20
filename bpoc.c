#include<stdio.h>
// Currently contains only the letter arrangement ways.
int main(){
  int n, aw=1;
  printf("Enter the number of letters to be arranged:");
  scanf("%d", &n);
  for (int i=1; i<=n; i++)
    aw *= i;
   printf("\nA group of %d letters can be arranged in %d different ways.\n", n, aw);
}
