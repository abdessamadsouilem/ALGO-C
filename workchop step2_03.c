#include<stdlib.h>
#include <stdio.h>
#include <math.h>

void main()
{
	float a, b, c, delta, s1, s2;
	printf("donner a:");
	scanf("%f",&a);
	printf("donner b:");
	scanf("%f",&b);
	printf("donner c:");
	scanf("%f",&c);
	
	printf("équation est %fx² +%fx +%f ",a,b,c);
	
	delta=(b*b)-(4*a*c);
	printf("delta :%f",delta);
	if(delta==0){
		s1=((-b)/(2*a));
		printf(" \n slution est %f ",s1);
	}
	else if (delta<0){
		printf("\n equation na aucun solition");
	}
	else if (delta>0){
		s1=((-b+sqrt(delta))/(2*a));
		s2=((-b-sqrt(delta))/(2*a));
		printf("\n solution 1:%f  solution 2:%f",s1,s2);
	}
}
