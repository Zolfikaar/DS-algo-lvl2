// This solution is O(n^2) Time Complexity, i need to make it O(n) by not using nested loop

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

void PrintInvertedNumber(int Number)
{
  // 65 is ASCII table value for cabital A
  for (int i = 65 + Number - 1; i >= 65; i--)
  {
    for (int j = 1; j <= Number - (65 + Number - 1 - i); j++)
    {
      cout << char(i);
    }

    cout << "\n";
  }
}

int main()
{
  PrintInvertedNumber(ReadPositiveNumber("Please Enter a Number?"));
}
