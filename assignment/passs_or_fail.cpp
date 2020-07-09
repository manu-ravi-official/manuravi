// Using a C++ program check whether a student passed the exam or not based on total mark which shall be above 40%
#include<iostream>
using namespace std;
 int main()
 {
 int tot_mark,mark1,mark2,mark3;
 cout<<"ENTER MARK 1 (out of 100) : ";
 cin>>mark1;
  cout<<"ENTER MARK 2 (out of 100) : ";
 cin>>mark2;
  cout<<"ENTER MARK 3 (out of 100) : ";
 cin>>mark3;
 tot_mark=mark1+mark2+mark3;
 if(tot_mark>(300*40)/100)
 {
	cout<<endl<<"STUDENT IS PASSED . . . . !! "<<endl;
	}
	else
		cout<<endl<<"STUDENT IS FAILED . . . . !! "<<endl;
	}
