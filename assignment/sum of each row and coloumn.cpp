//sum of each row and coloumn
#include<iostream>
using namespace std;
void row();
void col();
int main()
{
	row();

	return 0;
}	
	void row()
	{
	int row,col,i,j,sum=0;
	cout<<"Enter row :";
	cin>>row;
	cout<<"Enter coloumn :";
	cin>>col;
	int ar[row][col];
	cout<<"Enter array elements : ";
	for(i=0;i<row;i++)
		{
			for(j=0;j<col;j++)
			{
			cin>>ar[i][j];
			}
		}
//find sum of rows
for(i=0;i<row;i++)
{
	sum=0;
	for(j=0;j<col;j++)
	{
	sum=sum+ar[i][j];
	}
cout<<"sum of "<<i+1<<"th row = "<<sum<<endl;
}
//find sum of coloumns

{
int i,j,sum=0;
for(i=0;i<col;i++)
{
	sum=0;
for(j=0;j<row;j++)
{
sum=sum+ar[j][i];
}
cout<<endl<<"sum of "<<i+1<<"th coloumn = "<<sum;
}
}
}


