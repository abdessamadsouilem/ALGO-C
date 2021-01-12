#include<stdio.h>
void etoiles(int n);
void espases (int n);
void main ()
{
  int i, j, nbrline=5;
 
  for(i=1;i<=5;i++){
  for(j=4;j>0;j--){
   espases(i);}
  	etoiles(i);
  	printf("\n");
  
   }
}
void etoiles (int n)
{
int i;	
	for(i=1;i<=n;i+=2){
		printf("*");
	}
	printf("\n");
}
void espases (int n)
{
	int j;
	for(j=1;j<=n;j--){
		printf("\t");
	}
	printf("\n");
}
