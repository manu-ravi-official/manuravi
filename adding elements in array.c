/* author : @manu_ravi_official
      program for finding sum of the elements of an multidimensional array
      */
#include<stdio.h>
void main()

{
	int i,j,r,c;
	printf("enter the number of rows : ");
	scanf("%d",&r);
	
	printf("enter the number of coloumns : ");
	scanf("%d",&c);
	int a[r][c],sum=0;
	
	//entering array elements
	printf("enter elements");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}	
	
	
	//adding elements one by one
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			sum=sum+a[i][j];
		}
	}	
	printf("\nsum of the elements in the array is : %d",sum);
}
