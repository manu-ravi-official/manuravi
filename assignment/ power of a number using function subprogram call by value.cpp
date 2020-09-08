#include<iostream>
using namespace std;
double power(int ,int);
int main()
{
int a,b;
double pow;
cout<<"enter first number  : ";
cin>>a;
cout<<"enter second number : ";
cin>>b;
pow=power(a,b);
cout<<a<<" ^ "<<b<<" = "<<pow;
return 0;
}
//functon for power
double power(int a,int b)
{
int i,pow=1;
for(i=1;i<=b;i++)
{
	pow*=a;
	
}
return pow;
}
