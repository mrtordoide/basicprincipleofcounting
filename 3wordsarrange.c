#include<stdio.h>
void main(){
	char a[10], b[10], c[10];
	printf("A:");
	scanf("%s", a);
	printf("B:");
	scanf("%s", b);
	printf("C:");
	scanf("%s", c);
	system("clear");
	printf("Those letters in the word %s%s%s can be arranged as:\n",a,b,c); 
	printf("%s%s%s\t", a,b,c);
	printf("%s%s%s\t", b,c,a);
	printf("%s%s%s\n", c,a,b);
	printf("%s%s%s\t", c,b,a);
	printf("%s%s%s\t", b,a,c);
	printf("%s%s%s\n", a,c,b);
}
