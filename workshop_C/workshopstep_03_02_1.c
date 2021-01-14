#include<stdio.h>
int howold();
int main()
{
  
  
  printf("%d",howold());
}
int howold()
{ int age;
  printf("donner votre age :");
  scanf("%d",&age);
 return age;
}
