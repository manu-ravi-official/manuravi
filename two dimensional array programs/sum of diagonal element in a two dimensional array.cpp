#include<iostream>
using namespace std;
int main()
{
int array_size,sum=0,col,row,i,j;
cout<<"enter the size of square array : ";
cin>>array_size;
row=array_size;
col=array_size;
int ar[row][col];
for(i=0;i<row;i++)
{
	for(j=0;j<col;j++)
	{
		cin>>ar[i][j];
	}	
}
//diagonal elements
for(i=0;i<row;i++)
{
	for(j=i;j<=i;j++)
	{
		sum=sum+ar[i][j];
	}	
}
cout<<"Sum of diagonal elements is :"<<sum;
return 0;
}
