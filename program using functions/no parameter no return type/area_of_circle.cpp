/*author : Manu Ravi
	program to find area of circle ,use preprocessor directive ofr pi =3.14. */

#include<iostream>
#define pi 3.14
using namespace std;
void area();
int main()
{
area();
return 0;
}
void area()
{
int r;
cout<<"Enter  radius of circle : " ;
cin>>r;
cout<<"area = "<<pi*(r*r);
}
