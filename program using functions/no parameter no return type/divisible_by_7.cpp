/*author : Manu Ravi
	program to check whether a given number is divisible by 7*/

#include<iostream>
using namespace std;
void check();
int main()
{
check();
return 0;
}
void check()
{
int n;
cout<<"Enter a number : " ;
cin>>n;
if(n%7==0)
{
cout<<"The number is divisible by 7";
}
else
{
cout<<"The number is not divisible by 7";
}
}
