#include<stdlib.h>
#include <stdio.h>
#include <math.h>

int divededby(int n,int a)
{
    if(a!=0)
    {
        return n/a;
    }
    else
        return 0;
}

int controller(int a)
{
    int i=0;
    for(i=2;i<a;i++)
    {
        if(a%i==0)
        {
            return 0;
        }
    }

    return 1;
}


int main()
{

int a,b;
printf("donner le nombre a :");
scanf("%d",&a);
printf("donner le nombre  :");
scanf("%d",&b);

int div=divededby(a,b);
if(controller(div)==1)
    printf("nombre premir");
else
    printf(" non premier");

}

