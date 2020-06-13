/*author : Manu Ravi
	sum of numbers without parameter and without return type*/

#include<iostream>
using namespace std;
void sum();
int main()
{

sum();
return 0;
}
void  sum ()
{
int a,b,s;
cout<<"enter two  numbers :";
cin>>a>>b;
s=a+b;
cout<<"sum = "<<s;
}
