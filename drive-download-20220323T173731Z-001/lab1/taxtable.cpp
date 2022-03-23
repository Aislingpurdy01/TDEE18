#include <iostream>
#include <string>

using namespace std;

int main()
{
  int lower = 0;
  int upper = 0;
  float stride = 0;
  float tax = 0;
  int x = 1; 

  cout << "Enter first price: ";
  cin >> lower;
  if (lower < 0)
  {
      cout << "ERROR: First price must be atleast 0 (zero) SEK\n";
      cout << "Enter first price: ";
      cin >> lower;
  } 

  cout << "Enter last price: ";
  cin >> upper;

  cout << "Enter stride: ";
  cin >> stride;
  if (stride < 0.01)
  {
      cout << "ERROR: Stride must be atleast 0.01\n";
      cout << "Enter stride: ";
      cin >> stride;
  }

  // tax %
  cout << "Enter tax percentage: ";
  cin >> tax;
  // turn to decimal:
  tax = tax * 0.01;
  float i = lower + (stride * x);

  // table
  cout << "Price" << "            " << "Tax" << "            " << "Price with tax\n";
  cout << "------------------------------------------\n";
  cout << lower << "              " << lower*tax << "            " << lower + (lower*tax) << "\n";
  
  while (i <= upper)
  {
      cout << i << "            " << i * tax << "            " << i + (i * tax) << "\n";
      x = x + 1;
      i = lower + (stride * x);
  }

  return 0;


}
