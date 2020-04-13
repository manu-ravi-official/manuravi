#include<stdio.h>
void main()

{

int a[2][3],i,j;
printf("enter array elements : ");

for ( i=0;i<2;i++)
{
	for(j=0;j<3;j++)
	{
	scanf("%d",&a[i][j]);
	}
}	
	//printing section
	printf("the elements are : \n ");
	
	for ( i=0;i<2;i++)
{
	for(j=0;j<3;j++)
	{
	printf("%4d",a[i][j]);
	}
	printf("\n ");
}	}
	
	
