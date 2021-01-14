#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main()
{
	int a, b;
	printf("donner le nombre a :");
	scanf("%d",&a);
	printf("donner le nombre b :");
	scanf("%d",&b);
	
	printf("\n%d + %d = %d",a,b,a+b);
	printf("\n%d - %d = %d",a,b,a-b);
	printf("\n%d * %d = %d",a,b,a*b);
	if (b!=0){
	printf("\n%d mod %d = %d",a,b,a%b);

	printf("\n%d / %d = %d",a,b,a/b);}
}
