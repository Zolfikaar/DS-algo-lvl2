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

void ReverseNumber(int Number)
{
  int reversed_num = 0, remainder = 0;

  while (Number > 0)
  {
    remainder = Number % 10;
    Number = Number / 10;
    reversed_num = reversed_num * 10 + remainder;
  }

  cout << reversed_num;
}

int main()
{
  ReverseNumber(ReadPositiveNumber("Please Enter A Positive Number"));
}