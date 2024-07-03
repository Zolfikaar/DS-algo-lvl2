#include <iostream>
#include <string>
using namespace std;

void FrequentDigit(int Number, int Digit)
{
  int DigitCount = 0, CurrentDigit = 0;

  while (Number > 0)
  {
    CurrentDigit = Number % 10;
    if (CurrentDigit == Digit)
    {
      DigitCount++;
    }
    Number = Number / 10;
  }

  cout << "Digit " << Digit << " Frequency is " << DigitCount << " Times \n";
}

void ReadDigit(int Number)
{
  int Digit;

  cout << "Which Digit You Want To Check its Frequency!" << endl;

  cin >> Digit;

  FrequentDigit(Number, Digit);
}

void ReadPositiveNumber(string Message)
{
  int Number = 0;

  do
  {
    cout << Message << endl;
    cin >> Number;
  } while (Number <= 0);

  ReadDigit(Number);
}

int main()
{
  ReadPositiveNumber("Please Enter A Positive Number");
}