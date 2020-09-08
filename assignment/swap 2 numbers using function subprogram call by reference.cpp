#include<iostream>
using namespace std;
void swap(int &a,int &b);
int main()
{
int a,b;
cout<<"enter first number : ";
cin>>a;
cout<<"enter second number : ";
cin>>b;
cout<<"\n Before swapping : "<<a<<" , "<<b;
swap(&a,&b);
return 0;
}
void swap(int &a,int &b)
{
int temp;
temp=&a;
a=*b;
b=*temp;
cout<<"\n after swapping : "<<a<<" , " <<b;
}

