#include<stdio.h>
void boolisPremier(int nbr);
void boolisPremier(int nbr)
{
	int p=0,i ;
for(i=1; i<=nbr; i++)
   {
      if(nbr%i==0)
      {
        p++;
      }
   }
   if(p==2)
   {
      printf(" %d est un nombre premier.",nbr);
   }
   else
   {
      printf(" %d n'est pas un nombre premier.",nbr);
   }
}
void main()
{ int nbr;
 printf("donner nombre :");
 scanf("%d",&nbr);
 boolisPremier(nbr);
 
}



