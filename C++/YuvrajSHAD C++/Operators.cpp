#include <iostream>
#include <iomanip>   // needed for formatting floating-point numbers
using namespace std;

/* Relational Operators

&& AND
|| OR
!  NOT
^  XOR   */

int main() {
  int i1 = 2, i2 = 4;
  double d1 = 2.5, d2 = 5.0;

  // Print floating-points in fixed format with 1 decimal place
  cout << fixed << setprecision(1);  // need <iomanip>

  cout << i1 << " + " << i2 << " = " << i1+i2 << endl;  // 6
  cout << d1 << " + " << d2 << " = " << d1+d2 << endl;  // 7.5
  cout << i1 << " + " << d2 << " = " << i1+d2 << endl;  // 7.0  <==

  cout << i1 << " - " << i2 << " = " << i1-i2 << endl;  // -2
  cout << d1 << " - " << d2 << " = " << d1-d2 << endl;  // -2.5
  cout << i1 << " - " << d2 << " = " << i1-d2 << endl;  // -3.0 <==

  cout << i1 << " * " << i2 << " = " << i1*i2 << endl;  // 8
  cout << d1 << " * " << d2 << " = " << d1*d2 << endl;  // 12.5
  cout << i1 << " * " << d2 << " = " << i1*d2 << endl;  // 10.0 <==

  cout << i1 << " / " << i2 << " = " << i1/i2 << endl;  // 0    <==
  cout << d1 << " / " << d2 << " = " << d1/d2 << endl;  // 0.5
  cout << i1 << " / " << d2 << " = " << i1/d2 << endl;  // 0.4  <==
  return 0;
}