#include<iostream>
using namespace std;
float mul(float ,float);
float cube_a(float);
float cube_b(float);
int main()
{
float a,b,mult=0,cube=0;
cout<<"enter first number  : ";
cin>>a;
cout<<"enter second number : ";
cin>>b;
mult=mul(a,b);
cout<<endl<<a<<" * "<<b<<" = "<<mult;
cube=cube_a(a);
cout<<endl<<a<<" * "<<a<<" * "<<a<<" = "<<cube;
cube=cube_b(b);
cout<<endl<<b<<" * "<<b<<" * "<<b<<" = "<<cube;
return 0;
}
//multiplication funtion
inline float mul(float a,float b )
	{
		return(a*b);
	}
//function-cube of a
inline float cube_a(float a)
	{
		return(a*a*a);
	}
//funtion-cube of b	
inline float cube_b(float b )
	{	
		return(b*b*b);
	}
