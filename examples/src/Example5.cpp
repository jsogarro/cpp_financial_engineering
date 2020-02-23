#include <iostream>

#include "divisor.h"
#include "multiplier.h"

using namespace std;

int main() {
  const int MONTHS_IN_YEAR = 12;
  const int PERCENT_DENOMINATOR = 100;

  double principal = 0.0;
  double humanInterest = 0.0;
  int yearsOfLoan = 0;

  cout << "Enter amount: ";

  cin >> principal;

  cout << "Enter the interest rate:";
  cin >> humanInterest;

  cout << "Enter the years of loan:";
  cin >> yearsOfLoan;

  double interest = divisor(humanInterest, PERCENT_DENOMINATOR);

  double monthsInterest = divisor(interest, MONTHS_IN_YEAR);
  long monthsOfLoan = multiplier(yearsOfLoan, MONTHS_IN_YEAR);

  cout << "The principal entered is " << principal << "." << endl;
  cout << "The interest entered is " << interest << "." << endl;

  cout << "The monthly interest is " << monthsInterest << "." << endl;
  cout << "The months of the loan is " << monthsOfLoan << "." << endl;

  return 0;
}