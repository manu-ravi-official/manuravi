#include<iostream>
using namespace std;
int main()
{
	int n,rem=0,rev=0,org;
	cout<<"Enter  a number :";
	cin>>n;
	org=n;
	while (n != 0) {
        rem = n % 10;
        rev= rev * 10 + rem;
        n /= 10;
    }


    if (org == rev)
        cout<<org<<" is a palindrome.";
    else
       cout<<org<<" is not a palindrome.";

    return 0;
}
