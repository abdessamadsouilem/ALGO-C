#include<stdio.h>
#include<math.h>
void main ()
{
  int nombre1, nombre2;
  int G, P;
  int resultat=0;
  printf("donner le premier nombre :");
  scanf("%d",&nombre1);
  printf("donner le deuxieme nombre :");
  scanf("%d",&nombre2);
  
  if(nombre1>nombre2)
  {
  	G=nombre1;
  	P=nombre2;
  }
  else {
  	G=nombre2;
  	P=nombre1;
  }
  printf("%d  %d \n",G,P);
  while(P!=0){
  	if(P%2==1){
  		P--;
  		resultat+=G;
  		printf("= %d * %d + %d \n",G,P,resultat);
	  }
	else {
	  
	G*=2;
	P/=2;
	printf("= %d * %d + %d \n",G,P,resultat);}
  }
  printf("= %d \n",resultat);
}
