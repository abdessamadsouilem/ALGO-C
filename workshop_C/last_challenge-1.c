#include<stdio.h>
int adition(int a,int b);
int main()
{
  int a,b;
  printf("donner a :");
  scanf("%d",&a);
  printf("donner b :");
  scanf("%d",&b);
  
  adition(a,b);
  printf("%d",adition(a,b));
}
int adition(int a,int b)
{ 
  
  return a+b;
}
