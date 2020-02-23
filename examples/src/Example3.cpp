#include <iostream>

using namespace std;

int main() {
  const int MONTHS_IN_YEAR = 12;

  double principal = 0.0;
  double interest = 0.0;

  cout << "Enter amount: ";

  cin >> principal;

  cout << "Enter the interest rate:";
  cin >> interest;

  cout << "The principal entered is " << principal << "." << endl;
  cout << "The interest entered is " << interest << "." << endl;

  return 0;
}