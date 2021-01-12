#include <stdio.h>
#include <stdlib.h>



   int P; int A,B;// DECLARATION GLOBAL

int produit(int A, int B) //fonction du recursivité
{

if(B>0)
{
if( (B % 2) == 0) // % =mod
{
 P=produit (2*A,B/2);
 printf("\n %d * %d + %d ",A,B,P);
}

else{
P=produit (A,B-1)+A;
 printf("\n %d * %d + %d ",A,B,P);
}
}
return P;
}


int main()
{
int Pr;
printf("Donner la valeur de A :"); scanf("%d",&A);
printf("Donner la valeur de B :"); scanf("%d",&B);

Pr= produit (A,B);
printf("le produit de A, B = %d \n", Pr);
system("pause");
return 0;
}
