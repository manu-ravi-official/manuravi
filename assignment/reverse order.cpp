//array elements in reverse order
#include<iostream>
using namespace std;
void reverse(int arr[],int size);
int main()
{
	int size,i;
	cout<<"Enter array size:";
	cin>>size;
	cout<<"Enter array elements :";
	int ar[size];
	for(i=0;i<size;i++)
	{
		cin>>ar[i];
	}
	reverse(ar,size);
	return 0;
}
//function
void reverse(int arr[],int size)
{
	int i,rev[size],j;
	//initialising rev array with zero
	for(i=0;i<size;i++)
	{	
			rev[i]=0;
	}
	j=size-1;
	for(i=0;i<size;i++)
	{
		rev[j]=arr[i];
		j--;
	}
	
	//printing reversed array
	cout<<"reversesd array is :";
	for(i=0;i<size;i++)
	{
		cout<<rev[i]<<endl;
	}
}
