#include<iostream>

using namespace std;
class bank {
  float dep;
  float w;
  float bal;
  public:
    float deposit();
  float withdraw();
  void balance();
}
b;
float bank::deposit() {
  cout << "	ENTER AMOUNT TO DEPOSIT : ";
  cin >> dep;
  return dep;

}
float bank::withdraw() {

  cout << endl << "	ENTER AMOUNT TO WITHDRAW : ";
  cin >> w;

  while (w > dep) {
    cout << "	INSUFFICIENT BALANCE , withdraw less than " << dep << " ruppees" << endl;
    cout << endl << "	ENTER AMOUNT TO WITHDRAW :";
    cin >> w;

  }

  return w;

}
void bank::balance() {
  bal = dep - w;
  cout << "......" << w << " Ruppees withdraw succesfull" << "......" << endl << "	CURRENT BALANCE IS : " << bal;

}
int main() {
  b.deposit();
  b.withdraw();
  b.balance();

}
