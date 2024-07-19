#include <iostream>
#include <cstdlib>
using namespace std;

int RandomNumber(int from, int to)
{
  int rand_char = rand() % (to - from + 1) + from;

  return rand_char;
}

int ReadArrayLength()
{
  int arrLength;

  cout << "\nEnter array length: \n";

  cin >> arrLength;

  return arrLength;
}

int ReadNumberToLookFor()
{
  int number;

  cout << "Please enter a number to search for: ";

  cin >> number;

  return number;
}

void PrintArray(int arrLength)
{
  int arr[arrLength];

  for (int i = 0; i < arrLength; i++)
  {
    arr[i] = RandomNumber(1, 100);
  }

  cout << "Array Elements:\n";

  for (int j = 0; j < arrLength; j++)
  {
    cout << arr[j] << " ";
  }

  cout << "\n";

  int number = ReadNumberToLookFor();
  bool numberFound = false;

  for (int k = 0; k < arrLength; k++)
  {
    if (arr[k] == number)
    {
      numberFound = true;
    }
  }

  if (numberFound)
  {
    cout << "Number you are looking for: " << number << "\n";
    cout << "The Number is found :-)";
  }
  else
  {
    cout << "Number you are looking for: " << number << "\n";
    cout << "The number is not found :-(";
  }
}

int main()
{
  // Seed the random number generator in c++, call it only once.
  srand((unsigned)time(NULL));

  int arrLength = ReadArrayLength();

  PrintArray(arrLength);

  return 0;
}
