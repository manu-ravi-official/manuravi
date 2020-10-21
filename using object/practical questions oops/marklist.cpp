#include<iostream>
using namespace std;
class marklist
{
int regno,total;
char name[20];
int mark1,mark2,mark3;
public:
void get_data();
int calculate();
void print();
};
void marklist:: get_data()
{
cout<<"Enter register number : ";
cin>>regno;
cout<<"enter name : ";
cin>>name;
cout<<"mark 1 : ";
cin>>mark1;
cout<<"mark 2 : ";
cin>>mark2;
cout<<"mark 3 : ";
cin>>mark3;
}
int marklist::calculate()
{
total=mark1+mark2+mark3;
return total;
}
void marklist:: print()
{
cout<<"---MARK LIST--- "<<"\nRegister number : "<<regno<<"\nname : "<<name<<"\nmark1 : "<<mark1<<"\nmark2 : "<<mark2<<"\nmark3 : "<<mark3<<"\nTotal mark = "<<total<<endl;
}
int main()
{
marklist m1,m2;
m1.get_data();
m1.calculate();
m1.print();
m2.get_data();
m2.calculate();
m2.print();
return 0;
};


