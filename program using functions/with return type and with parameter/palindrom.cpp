#include<iostream>
using namespace std;
int  palin(int  );
int main()

{
int n,org;
cout<<"Enter number:";
cin>>n;
org=palin(n);
if(n==org)
	{
	cout<<"palindrom";
	}
	else
	{
	cout<<"not palindrom";
	}

	
}

int  palin(int  n)
{
	int rem,rev;
	while(n!=0)
	{
	rem=n%10;
	rev=rev*10+rem;
	n=n/10;
	}
return rev;
}
