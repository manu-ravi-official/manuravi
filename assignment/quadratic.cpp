//QUADRATIC EQUATION

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  int a, b, c, d;
  float root1, root2;
  cout << "Enter coefficiets of the equation : " << endl << "coefficient of x :";
  cin >> a;
  cout << "coefficient of y :";
  cin >> b;
  cout << "coefficient of z : ";
  cin >> c;
  d = b * b - 4 * a * c;
	if (d > 0) 
	{
    cout << "roots are real and unequal : " << endl;
    root1 = (-b + sqrt(d)) / (2 * a);
    root2 = (-b - sqrt(d)) / (2 * a);
    cout << "root1 = " << root1 << endl << "root 2 = " << root2 << endl;
	} 
		else if (d == 0) 
		{
		cout << "roots are real and equal ";
		root1 = (-b + sqrt(d)) / (2 * a);
		cout << "root1 = " << root1 << endl << "root 2 = " << root1 << endl;
		} 
			else
			{
			cout << "Roots are  imaginary " << endl;
			root1 = (-b + sqrt(d)) / (2 * a);
			root2 = (-b - sqrt(d)) / (2 * a);
			cout << "root1 = " << root1 << endl << "root 2 = " << root2 << endl;
			}
}
