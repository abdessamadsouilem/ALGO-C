#include <stdio.h>
#include <stdlib.h>

int main()
{
 int a=0;
 int i,j=0;

 int k,x=1;

 printf("\n donner nomber : ");
 scanf("%d",&a);
 k=a;
if(a>2 && a%2!=0)
{


 for(i=0;i<(a/2)+1;i++)
 {
     k--;
     for(j=0;j<(k/2);j++)
     {
        printf(" ");
     }

     for(j=0;j<x;j++)
     {
        printf("*");
     }
       for(j=0;j<(k/2);j++)
     {
        printf(" ");
     }

     x+=2;
     k--;
     printf("\n");
 }

 }
 else
  printf("erorr nomber");

    return 0;
}
