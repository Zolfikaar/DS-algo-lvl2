#include <iostream>
#include <string>
using namespace std;

int ReadPositiveNumber(string Message)
{
  int Number = 0;

  do
  {
    cout << Message << endl;
    cin >> Number;

  } while (Number <= 0);

  return Number;
}

void PrintSum(int Number)
{
  int Remainder, Sum = 0;

  while (Number > 0)
  {
    Remainder = Number % 10;
    Number = Number / 10;
    Sum += Remainder;
  }
  cout << Sum;
}

int main()
{
  PrintSum(ReadPositiveNumber("Please Enter A Positive Number"));
}