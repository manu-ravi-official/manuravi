#include <stdio.h>
#include <math.h>
void quad(int,int,int);
void main()
{
int a,b,c;
printf("enter the coefficients");
scanf("%d%d%d",&a,&b,&c);
quad(a,b,c);
}
void quad(int a,int b,int c)
{
	int d,s,x,x2;
d=(b*b)-(4*a*c);
s=sqrt(d);
x=(-b+s)/(2*a);
x2=(-b-s)/(2*a);
printf("the values of x of the quadratic equation is  %d and %d \n",x,x2);
}
