#include<stdio.h>
#include<stdlib.h>

void main()
{
	float r,S,D,P;
	float Pi=3.14;
	
	printf("donner le rayon du cercle :");
	scanf("%f",&r);
	
	D=r*2;
	P=D*Pi;
	S=Pi*r*r;
	
	printf("Un cercle de rayon %f a pour diamètre %f, pour perimetre %f et pour surface %f.",r,D,P,S);
}

