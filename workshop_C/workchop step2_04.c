

#include<stdio.h>

void main()	
{
	int a, b ;
	
	printf("donner a : ");
	scanf("%d", &a);
		
	printf("donner b : ");
	scanf("%d", &b);
	
	int aide1=a,aide2=b;
    

  while(aide1!=aide2){
  	if(aide1>aide2)
  	aide1-=aide2;
  	else 
  	aide2-=aide1;
  }
  	printf("Le PGCD est : %d\n", aide1);}
