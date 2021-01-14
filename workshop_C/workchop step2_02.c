#include<stdio.h>
#include<math.h>
int main ()
{
	int a, b;
	char op;
	printf("donner le premier nomber:");
	scanf("%d",&a);
	printf("donner le deuxieme nomber:");
	scanf("%d",&b);
	printf("donner operation :");
	scanf(" %c",&op);
	
	
	switch(op){
	
	
	case'+' :printf("%d + %d = %d",a,b,a+b);
	break;
	case'-' :printf("\n%d - %d = %d",a,b,a-b);
	break;
	case'*' :printf("\n%d * %d = %o",a,b,a*b);
	break;
	case'/' :if (b!=0){
	printf("\n%d / %d = %d",a,b,a/b);
		
	}
	else{
		printf("\n ereur");
	}
	break;
	case'%' :if (b!=0){
	printf("\n%d mod %d = %d",a,b,a%b);
		
	}
	else{
		printf("\n ereur");
	}
	}
	
	
}
