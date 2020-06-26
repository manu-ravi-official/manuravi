//structure of employee 
#include<iostream>
using namespace std;
struct Employee
{
   
    char Name[25],desig[25];
    int Age;
    
};

int main()
{
    int i, n; 
 cout<<"\nEnter The Number of Employee\n\n";
 cin>>n;
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
     
     cout <<"\n" << Emp[i].Name <<"\n"<< Emp[i].Age<<"\n"<< Emp[i].desig<<"\n";
    }
 
}

