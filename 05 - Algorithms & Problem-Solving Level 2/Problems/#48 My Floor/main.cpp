#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;

float ReadNumber()
{
  float Number = 0;

  cout << "Please Enter a number\n";
  cin >> Number;

  return Number;
}

int myFloor(float Number)
{

  if (Number > 0)
    return int(Number);
  else
    return int(Number) - 1;
}

int main()
{

  float Number = ReadNumber();

  cout << "\nMy Floor: " << myFloor(Number) << endl;
  cout << "C++ Floor: " << floor(Number);

  return 0;
}
