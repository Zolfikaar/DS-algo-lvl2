#include <iostream>
#include <cstdlib>
using namespace std;

int ReadNumber()
{
  int Number = 0;

  cout << "Please Enter a number\n";
  cin >> Number;

  return Number;
}

int myAbs(float Number)
{
  if (Number > 0)
    return Number;
  else
    return Number * -1;
}

int main()
{

  float Number = ReadNumber();

  cout << "\nMy Abs: " << myAbs(Number) << endl;
  cout << "C++ Abs: " << abs(Number);

  return 0;
}
