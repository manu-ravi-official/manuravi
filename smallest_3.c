
#include <stdio.h>
#include <math.h>
void main()
{
int a;
int b;
int c;
printf("enter 3 numbers");
scanf("%d%d%d",&a,&b,&c);
if (b>a) 
{
    if (b>c) 
    {
        printf("%d is sammler",b);
    }
     else 
    {
        printf("%d is sammler",c);
    }
}		 else
		{
		if (a>c) {
        printf("%d is sammler",c);
		} 
		else 
		{
        printf("%d is sammler",a);
		}
}
}
