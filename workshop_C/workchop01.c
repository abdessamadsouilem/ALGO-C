#include<stdio.h>
#include<stdlib.h>

int main()
{
	char nom[20];
	char prenom[20];
	char age[20];
	char sex[20];
	char tele[20];
	
	printf("taper ton nom :");
	scanf("%s",nom);
	printf("taper ton prenom :");
	scanf("%s",prenom);
	printf("taper ton age :");
	scanf("%s",age);
	printf("taper ton sex :");
	scanf("%s",sex);
	printf("taper ton tele :");
	scanf("%s",tele);
	
	printf("ton nom et %s , ton prenom et %s ton age et %s ton sex et %s ton tele et %s  ",nom ,prenom, age, sex, tele);
}
