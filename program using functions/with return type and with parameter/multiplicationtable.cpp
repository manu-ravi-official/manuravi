#include<iostream>
using namespace std;
int multi(int);
int main()
{
int n,prod;
cout<<"Enter a number:";
cin>>n;
prod=multi(n);
for(int i=1;i<=10;i++)
{
cout<<n<<"*"<<i<<"="<<prod<<endl;
}
return 0;
}
int multi(int n)
{
int pro,i;
for(i=1;i<=10;i++)
{
pro=n*i;

}
return pro;
}

