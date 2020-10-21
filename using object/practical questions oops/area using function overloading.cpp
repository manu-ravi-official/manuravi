#include<iostream>
using namespace std;
class are
{

public:
int r,l,b,h,areaa;
float half;
int area(int r)//circle
{
	areaa= 3.14*(r*r);
return areaa;
}
int area(int l,int b)//rectangle
{
	areaa=l*b;
return areaa;
}
int area(int b,int h,float half)//triangle
{
	areaa=0.5*b*h;
return areaa;
}
};

int main()
{
are ar;
cout<<"----AREA OF CIRCLE----";
cout<<"\nEnter radius : ";
cin>>ar.r;


cout<<"area of circle is : "<<ar.area(ar.r);
cout<<"\n\n----AREA OF RECTANGLE----";
cout<<"\nEnter Length and breadth : ";
cin>>ar.l>>ar.b;
ar.area(ar.l,ar.b);
cout<<"area of rectangle is : "<<ar.area(ar.l,ar.b);
cout<<"\n\n----AREA OF TRIANGLE----";
cout<<"\nEnter base and height : " ;
cin>>ar.b>>ar.h;
ar.half=0.5;

cout<<"area of circle is : "<<ar.area(ar.b,ar.h,ar.half);
return 0;
};


