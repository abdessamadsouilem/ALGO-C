#include<stdio.h>
#include<stdlib.h>

void main()
{
	int moyenne, somme, a, i=0;
	
	do {
		printf("Entrez un entier positif %d :",i+1);
		scanf("%d",&a);
		i++;
		somme=somme+a;
		
	}while(a!=-1);
	moyenne=(somme+1)/(i-1);
	printf("%d",moyenne);
}
	
