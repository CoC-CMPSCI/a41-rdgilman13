
//?  [Problem Definition]
//*        A software company sells a package that retails for $99. Quantity discounts are given
//*        according to the following table.
//*                Quantity                 Discount Percent
//*                10 - 19                        20%
//*                20 - 49                        30%
//*                50 - 99                        40%
//*                100+                            50%
//*- Write a program that asks for the number of units sold and
//*  computes the total cost of the purchase.
//** Input Validation : Input must be a positive integer.
//**    If we have negative input, just quit the program.

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  const double PERC19 = 0.2;
  const double PERC49 = 0.3;
  const double PERC99 = 0.4;
  const double PERC100 = 0.5;
  const double Price = 99.00;
  double totalCost, originalAmount, discountAmount, dRate;
  int numberOfSold;

  cout << "Enter the number of units sold\n";
  // TODO
  cin >> numberOfSold;
  // Input Validation
  // TODO
  if (numberOfSold < 0)
  {
        cout << "Error: number of units sold must be positive." << endl;
        return 0;
    }
  
  // Determine discount rate based on quantity
  // TODO

  if (numberOfSold >= 100)
    {
        dRate = PERC100;
    }
    else if (numberOfSold >= 50)
    {
        dRate = PERC99;
    }
    else if (numberOfSold >= 20)
    {
        dRate = PERC49;
    }
    else if (numberOfSold >= 10)
    {
        dRate = PERC19;
    }
    else
    {
        dRate = 0.0;
    }

  // Calculate original amount, discount, and total
  // TODO

  originalAmount = numberOfSold * Price;
  discountAmount = originalAmount * dRate;
  totalCost = originalAmount - discountAmount;

  /* To print out your result, use the following statements */
  cout << setprecision(2) << fixed;
  cout << "Original amount is " << originalAmount << endl;
  cout << "Discount amount is " << discountAmount << endl;
  cout << "Total Price is " << totalCost << endl;

  return 0;
}
