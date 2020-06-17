/*program to print the sum of elements in a row of an 2D array*/
	
#include<iostream>
using namespace std;
int main()
{
int  i,j,sum,row,col;
cout<<"Enter the number of row : ";
cin>>row;
cout<<endl<<"Enter the number of coloumn : ";
cin>>col;
int ar[row][col];
cout<<"enter data in to array:";
for(i=0;i<row;i++)
{
	for(j=0;j<col;j++)
	{	
	cin>>ar[i][j];
	}
}
//print as row
for(i=0;i<row;i++)
{
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		
		{	
			sum=sum+ar[i][j];
			
		}
		cout<<"Sum of "<<i+1<<"th row ="<<sum<<endl;
		sum=0;
	}

}


return 0;
}
