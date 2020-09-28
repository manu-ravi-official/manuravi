#include <iostream>
using namespace std;
class Box 
{
public:
		int length;
		int breadth;
		int height;
	Box(int l, int b, int h) 
	{
		length = l;
		breadth = b;
		height = h;
	}
	int Volume()
    {
		return length * breadth * height;
	}
	int compare(Box box) 
	{
		return this -> Volume() > box.Volume();
	}
};
int main(void)
{
  int l, b, h,l2,b2,h2;
  cout <<endl<< "---- Box 1 ----" << endl;
  cout << "Enter Length : ";
  cin >> l;
  cout << "Enter Breadth: ";
  cin >> b;
  cout << "Enter Height : ";
  cin >> h;
  Box Box1(l, b, h);
  cout <<endl<< "---- Box 2 ----" << endl;
  cout << "Enter Length : ";
  cin >> l2;
  cout << "Enter Breadth: ";
  cin >> b2;
  cout << "Enter Height : ";
  cin >> h2;
  Box Box2(l2, h2, b2);
  if (Box1.compare(Box2)) 
  {
    cout  << endl<< "Box1 is Larger";
  } 
  else 
  {
    cout << "Box2 is equal to or larger than Box1" << endl;
  }
  return 0;
}
