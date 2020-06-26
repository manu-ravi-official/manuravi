//ascending order
#include<iostream>
using namespace std;
void ascending(int number[],int size);
int main()
{
int size,i;
cout<<"enter array size:";
cin>>size;
int ar[size];
cout<<"Enter array elements :";
for(i=0;i<size;i++)
	{
	cin>>ar[i];
	}
	ascending(ar,size);
}
//ascending order
void ascending(int number[],int size)
{
	int i,j,a;
for(i=0;i<size;i++)
{
	for(j=i+1;j<size;j++)
	{
		if(number[i]>number[j])
		{
			a=number[i];
			number[i]=number[j];
			number[j]=a;
		}
	}
}
cout<<"The elements are arranged in ascending order as :"<<endl;
	for(i=0;i<size;i++)
		cout<<number[i]<<endl;
		
	}
		
