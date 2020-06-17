#include<iostream>
using namespace std;
int main()
{
int ar[4][3],i,j,large=0,rowloc,colloc;
cout<<"Ener The Elements to Array :";
//entering elements
for(i=0;i<4;i++)
{
	for(j=0;j<3;j++)
	{
		cin>>ar[i][j];
	}
}	
//finding largest
large=ar[0][0];
for(i=0;i<4;i++)
{
	for(j=0;j<3;j++)
	{
		if(large<ar[i][j])
		{
		large=ar[i][j];
		rowloc=i;
		colloc=j;
		}
	}
}	
cout<<"THE LARGEST ELEMENT IS :"<<large<<endl<<"at"<<"("<<rowloc+1<<"th row and "<<colloc+1<<" th coloumn)";
return 0;
}
