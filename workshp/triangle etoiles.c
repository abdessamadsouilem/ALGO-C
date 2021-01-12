#include<stdio.h>

void etoiles(int n);

void main ()
{
  int nbrline, i;	
 printf("nombre de lines :");
 scanf("%d",&nbrline);
 
  for(i=0;i<=nbrline;i++){
  	etoiles(i);
  	printf("\n");
  }
  
}
void etoiles (int n)
{
int i;	
	for(i=1;i<=n;i++){
		printf("*");
	}
	printf("\n");
}
