#include<stdio.h>

float MAX(float a, float b);

void main()
{
	float nombre1, nombre2, m;
	printf("donner le nombre 1 :");
	scanf("%f",&nombre1);
	printf("donner le nombre 2 :");
	scanf("%f",&nombre2);
	
	m=MAX(nombre1,nombre2);
	printf("le nombre superieure est : %f",m);
}
float MAX(float a, float b){
	if (a>b)
	return a;
	else 
	return b;
}
