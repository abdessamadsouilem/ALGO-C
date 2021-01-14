#include<stdio.h>

int echanger(int a, int b);
int echanger(int a, int b)
{
	
	a=b-a;
	b=b-a;
	a=b+a;
	printf("a:%d \n",a);
	printf("b:%d",b);
	
}
int main()
{
	int a,b;
	printf("donner a :");
	scanf("%d",&a);
	printf("donner b :");
	scanf("%d",&b);
	
	echanger(a,b);
	
	
}
