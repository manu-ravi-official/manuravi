//Develop a C++ program find the largest among three different numbers entered by user.
#include<iostream>
using namespace std;
int main()
{
int num1,num2,num3;
cout<<"ENTER NUMBER 1 : ";
cin>>num1;
cout<<"ENTER NUMBER 2 : ";
cin>>num2;
cout<<"ENTER NUMBER 3 : ";
cin>>num3;
if((num1>num2)&&(num1>num3))
{
cout<<num1<<" is greater "<<endl;
}
else if((num2>num1)&&(num2>num3))
{
cout<<num2<<" is greater "<<endl;
}
else if((num3>num1)&&(num3>num2))
{
cout<<num3<<" is greater "<<endl;
}
}
