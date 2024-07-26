#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;

int ReadNumber()
{
  int Number = 0;

  cout << "Please Enter a number\n";
  cin >> Number;

  return Number;
}

float GetFractionPart(float Number)
{
  return Number - int(Number);
}

int myRound(float Number)
{
  int intPart = int(Number);

  float fractionPart = GetFractionPart(Number);

  if (abs(fractionPart) >= .5)
  {
    if (Number > 0)
    {
      intPart++;
    }
    else
    {
      intPart--;
    }
  }
  else
  {
    return intPart;
  }

  return intPart;
}

int main()
{

  float Number = ReadNumber();

  cout << "\nMy Round: " << myRound(Number) << endl;
  cout << "C++ Round: " << round(Number);

  return 0;
}
