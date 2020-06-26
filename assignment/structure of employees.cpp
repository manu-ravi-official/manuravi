//structure of employee 
#include<iostream>
using namespace std;
void funct(int n);
struct Employee
{
   
    char Name[25],desig[25];
    int Age;
    
};

int main()
{
	int  n; 
 cout<<"\nEnter The Number of Employee\n\n";
 cin>>n;
funct(n);
}
	
void funct(int n)
{
 int i;  
 Employee Emp[n];
 
    for(i=0;i<n;i++)
    {

    cout << "\nEnter details of " << i+1 << " Employee"<<endl;

   

    cout << "\nEnter Employee Name : ";
    cin >> Emp[i].Name;

    cout <<"\nEnter Employee Age : ";
    cin >> Emp[i].Age;

    cout <<"\nEnter Employee designation : ";
    cin >> Emp[i].desig;
    
 }


    cout << "Details of Employees\n";
    
   
 for(i=0;i<n;i++)
    {
     
     cout <<"\nName :" << Emp[i].Name <<"\nAge:"<< Emp[i].Age<<"\nDesignation:"<< Emp[i].desig<<"\n";
    }
 
}
