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

float GetFractionPart(float Number)
{
  return Number - int(Number);
}
int myCeil(float Number)
{

  if (abs(GetFractionPart(Number)) > 0)

    if (Number > 0)
      return int(Number) + 1;
    else
      return int(Number);

  else
    return Number;
}

int main()
{

  float Number = ReadNumber();

  cout << "\nMy Ceil: " << myCeil(Number) << endl;
  cout << "C++ Ceil: " << ceil(Number);

  return 0;
}
