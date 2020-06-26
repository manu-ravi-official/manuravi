//array with odd and even numbers
#include<iostream>
using namespace std;
void even(int arr[ ],int size);
int main()
{
int size,i;
cout<<"Enter array size :";
cin>>size;
int ar[size];
for(i=0;i<size;i++)
	cin>>ar[i];
even(ar,size);
return 0;
}
//funtion
void even(int arr[ ],int size)
{
int i,E[10],o[10],j=0,k=0;
//initialising arrays E and O with 0
for(i=0;i<size;i++)
{
		E[i]=o[i]=0;
}
//largest finding
for(i=0;i<size;i++)
{
		if(arr[i]%2==0)
	{
				
				E[j]=arr[i];
			
				j++;
	}
	else if(arr[i]%2==1)
	{
		o[k]=arr[i];
		k++;
	
	 }
	 
}
//printing elements of even
cout<<"even numbers are :";

for(i=0;i<size;i++)
{
		if(E[i] !=0)
		{
		cout<<E[i]<<"\t";
		}
}
//printing elements of odd
cout<<"\n odd numbers are :";
for(i=0;i<size;i++)
{
	if(E[i] !=0)
	{	
	cout<<o[i]<<"\t";
	}
}
}


