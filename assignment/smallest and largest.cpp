//largest and smallest
#include<iostream>
using namespace std;
int large(int ar[],int size);
int small(int ar[],int size);
int main()

{
int size,l,s,i;
cout<<"enter array size:";
cin>>size;
int ar[size];
cout<<"Enter array Elements:";
for(i=0;i<size;i++)
	{
	cin>>ar[i];
	}
	l=large(ar,size);
	cout<<"Largest element is : "<<l<<endl;
	
	s=small(ar,size);
		cout<<"smallest element is : "<<s;
	return 0;
}
//finding smallest number
int large(int ar[],int size)
{
int large,i;
large=ar[0];
for(i=0;i<size;i++)
{
	if(large<ar[i])
	{
	large=ar[i];
	}
}
return large;
}	


//finding largest number 
int small(int ar[],int size)
{
 int small=ar[0],i;
 for(i=0;i<size;i++)
{
	if(small>ar[i])
	{
	small=ar[i];
	}
}
return small;
}	
	
