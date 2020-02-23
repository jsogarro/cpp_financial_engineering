#include <iostream>

using namespace std;

int main() {
  const int MONTHS_IN_YEAR = 12;
  double principal = 100000.0;
  double interest = 0.05;
  int yearsOfLoan = 30;

  double monthInterest = interest / MONTHS_IN_YEAR;
  long monthsOfLoan = yearsOfLoan * MONTHS_IN_YEAR;

  cout << principal << " " << interest << " " << yearsOfLoan << endl;

  return 0;
}