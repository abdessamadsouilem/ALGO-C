#include<stdio.h>
void escpa(int a,int i);
void najma(int a,int i);
void najma(int a,int i)
{
     int k;
  for(k=(a-i);k<a;k++)
	{
	    if(k==(a-i))
		printf("*");
		else
        printf("**");
	}
}
void escpa(int a,int i)
{
     int j;
  	for(j=a-i;j>=0;j--){
		printf("-");

		}
}
int main(){
	int a,i,j=0,k=0; 
	printf("donner nombre de line :");
	scanf("%d",&a);
	
	for(i=1;i<=a;i++){
	/*for(j=(a-i);j>=0;j--){
		printf(" ");
		
		}*/
    escpa( a, i);
    najma( a, i);
	/*for(k=(a-i);k<a;k++)	
	{
	if(k==a-i){
		printf("*");
	}
	else {
	   printf("**");	
	}*/
		
	
		printf("\n");
	}
	
}
