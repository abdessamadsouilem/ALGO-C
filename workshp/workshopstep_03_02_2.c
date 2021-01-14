#include <stdio.h>
#include <stdlib.h>

void tableMultipilcation(int start,int end )
{
  int i,j;
  for(i=start;i<=end;i++)
  {
      printf("\n tableMultipilcation de %d :",i);
      for(j=1;j<=12;j++)
      {
          printf("\n %d * %d = %d",i,j,i*j);
          printf("\n");
      }
      printf("\n \n");
  }
}

int main()
{
    int a,b;

    printf("\n donner start ");
    scanf("%d",&a);
     printf("\n donner end ");
    scanf("%d",&b);
    tableMultipilcation(a,b);
    return 0;

}
