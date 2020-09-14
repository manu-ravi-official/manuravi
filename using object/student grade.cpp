#include<iostream>
using namespace std;

class stud
{
	char name[20];
	int regno;
	int mark1 ;
	int mark2 ;
	int mark3 ;
	int mark4 ;
	int mark5 ;
	int total;
	float percentage;
public :
		void getdata();
		void compute_percentage();
		
		
};
void stud::getdata()
{
	stud s;
	cout<<"ENTER NAME : ";
	cin>>s.name;
	cout<<"ENTER REGISTER NUMBER : ";
	cin>>s.regno;
	cout<<" ENETER MARK 1 : ";
	cin>>s.mark1;
	cout<<" ENETER MARK 2 : ";
	cin>>s.mark2;
	cout<<" ENETER MARK 3 : ";
	cin>>s.mark3;
	cout<<" ENETER MARK 4 : ";
	cin>>s.mark4;
	cout<<" ENETER MARK 5 : ";
	cin>>s.mark5;
	
}
void stud::compute_percentage()
{
	stud s;
	s.total= s.mark1;
	s.percentage=(s.total*100)/500;
	cout<<"PERCENTAGE : "<<s.percentage;

	if(s.percentage>=90)
		cout<<"GRADE : S";
	else if(s.percentage>=80)
		cout<<"GRADE : A";
	else if(s.percentage>=70)
		cout<<"GRADE : B";	
	else if (s.percentage>=60)
		cout<<"GRADE : C";	
	else if (s.percentage>=50)
		cout<<"GRADE : D";	
	else if(s.percentage<40)
		cout<<"FAILED ";	
	}
int main()
{
getdata();
compute_percentage();
}
