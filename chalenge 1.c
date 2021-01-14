#include<stdio.h>
int main()
{
  int i,j,a;
  printf("donner nombre :");
  scanf("%d",&a);
  for(i=1;i<=a;i++)
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
