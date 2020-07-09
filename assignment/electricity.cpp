/*An electricity board charges the following rates to domestic users ti discourage large consumption of energy: For the first 100 units - 60P per unit For next 200 units - 80P per unit Beyond 300 units - 90P per unit All users are charged a minimum of Rs.50.00. if the total amount is more than Rs.300.00 than an additional surcharge of 15% is added Write a C++ program to read the names of users and number of units consumed and print out the charges with names*/
#include<iostream>
using namespace std;
int main( )
{
char name[10];
char again;
float units,amount;

do
{
	amount=50;
cout<<"Enter name : ";
cin>>name;
cout<<"Enter amount of electricity used : ";
cin>>units;
	if(units<=100)
	{
		amount=amount+units*.60;
		
	}
	else if(units<=300)
	{
	amount=amount+(100*.6)+(units-200*.80);
	
	}
	else if(units>300)
	{
		amount=amount+(100*.6)+(200*.80)+((units-300)*.90);
	}
	cout<<"\n\n"<<"Consumer Name : "<<name<<endl<<"amount needed to pay : "<<amount<<endl;
	cout<<"\n\nPress - y to continue :";
	cin>>again;
	cout<<"\n\n";
} while(again=='y');

	
return 0;

}
