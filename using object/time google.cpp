
#include<iostream>
using namespace std;
class time
{
int hour, minute,second;
public:
void getdata()
{
cout<<"enter hour : ";
cin>>hour;
cout<<"enter minute : ";
cin>>minute;
cout<<"second : ";
cin>>second;
}
time operator+(time b)
{
time c;
c.hour=hour+b.hour;
c.minute=minute+b.minute;
c.second=second+b.second;
if(c.second>60)
{
	c.second=c.second-60;
	c.minute=c.minute+1;
}
if(c.minute>60)
{
		c.minute=c.minute-60;
		c.hour=c.hour+1;
	}
		
return(c);
}
void display()
{
cout<<hour<<":"<<minute<<":"<<second;
}
};

int main()
{
time c1, c2, c3;
cout<<"enter first time\n";
c1.getdata();
cout<<"\nenter second time\n";
c2.getdata();
c3 = c1+c2;

cout<<"\n\nFirst time: ";

c1.display();
cout<<"\nsecond time : ";
c2.display();
cout<<"\nsum of 2 times : ";

c3.display();
return 0;
}

