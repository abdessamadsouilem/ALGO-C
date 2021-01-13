#include<stdio.h>
#include<stdlib.h>
int main()
{
  int i,j;
  int start ,end;
  printf("donner le nombre de table de multiplication :");
  scanf("%d",&end);
  for(i=end;i<=end;i++)
  {
      printf("\n tableMultipilcation de %d :",i);
      for(j=1;j<=10;j++)
      {
          printf("\n %d * %d = %d",i,j,i*j);
          printf("\n");
      }
      printf("\n \n");
  }
}
