#include<iostream>
using namespace std;
int  large(int rr[] ,int n);
int sec(int rr[],int n);
int main()
{
	
	int i,l,size,l2;
	cout<<"enter size:";
	cin>>size;
	int ar[size];
	cout<<"enter array elements:";
	for(i=0;i<size;i++)
	{
	cin>>ar[i];
	}
	
	l=large(ar,size);
	cout<<"Largest number is : "<<l<<endl;
	l2=sec(ar,size);
	cout<<"second Largest number is : "<<l2<<endl<<"End of the program";
}
//for finding large
int  large(int rr[] ,int size)
{
	int large,i;
	large=rr[0];
	for(i=0;i<size;i++)
	{
		if(large<rr[i])
		{
		large=rr[i];
		}
	}
return large;
}
//for second large
int sec(int rr[],int size)
{
	int i,secondlarge=rr[0];;
	int large=rr[0];
	for(i=0;i<size;i++)
	{
		if(large<rr[i])
		{
			large=rr[i];
		}
	}

for(i=0;i<size;i++)
{
	if((secondlarge<rr[i])&&(rr[i]<large))
	{
		secondlarge=rr[i];
	}
}
return secondlarge;
}



		




