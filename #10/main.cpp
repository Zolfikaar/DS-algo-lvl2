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

void PrintAllDigitsFrequencey(int Number)
{
  int remainder = 0;

  while (Number > 0)
  {
    remainder = Number % 10;
    Number = Number / 10;
    cout << remainder << endl;
  }
}

int main()
{
  int Number = ReadPositiveNumber("Please enter the a number?");
  int Reversed_Number = ReverseNumber(Number);
  PrintAllDigitsFrequencey(Reversed_Number);
  return 0;
}