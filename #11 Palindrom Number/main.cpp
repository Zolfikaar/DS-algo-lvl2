#include <iostream>
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

int ReverseNumber(int Number)
{
  int reversed_num = 0, remainder = 0;

  while (Number > 0)
  {
    remainder = Number % 10;
    Number = Number / 10;
    reversed_num = reversed_num * 10 + remainder;
  }

  return reversed_num;
}

bool CheckPalindromNumber(int Number)
{
  return Number == ReverseNumber(Number);
}

int main()
{

  if (CheckPalindromNumber(ReadPositiveNumber("Please Enter a Number?")))
  {
    cout << "Yes, Its a Plindrom Number";
  }
  else
  {
    cout << "No, Its Not a Plindrom Number";
  }
}