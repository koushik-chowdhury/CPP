#include <iostream>

using namespace std;

int main() {
  double principal, rate, time;

  // Get user input for principal, rate, and time
  cout << "Enter principal amount: ";
  cin >> principal;
  cout << "Enter interest rate (%): ";
  cin >> rate;
  cout << "Enter time (in years): ";
  cin >> time;

  // Convert rate to decimal
  rate /= 100;

  // Compound interest formula without pow function
  double amount = principal;
  for (int i = 0; i < time; i++) {
    amount *= (1 + rate);
  }

  // Calculate compound interest
  double compound_interest = amount - principal;

  // Display results
  cout << "Compound Interest: " << compound_interest << endl;
  cout << "Total Amount: " << amount << endl;

  system("pause"); // for holding the screen
  return 0;
}
