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

void PrintSingleNumber(int num)
{
  for (int j = 0; j < num; j++)
  {
    cout << num;
  }

  cout << "\n";
}

void PrintInvertedNumber(int Number)
{
  for (int i = Number; i > 0; i--)
  {
    PrintSingleNumber(i);
  }
}

int main()
{
  PrintInvertedNumber(ReadPositiveNumber("Please Enter a Number?"));
}
