#include<stdio.h>
void fact(int *);
int main()
{
	int a,b;
	printf("enter a number \n");
	scanf("%d",&a);
	b=&a;
	fact(&b);
}
void fact(int *n)
{		
		int f=1 ,i;
		while(i<=*n)
		{
		f=f*i;
		i++;
	}
		printf("factorial = %d ",f);
}
