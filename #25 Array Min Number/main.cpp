#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;

int RandomNumber(int from, int to)
{
  int rand_char = rand() % (to - from + 1) + from;

  return rand_char;
}

int ReadArrayLength()
{
  int arrLength;

  cout << "\nEnter the number of array length: \n";

  cin >> arrLength;

  return arrLength;
}

void PrintArray(int arrLength)
{
  int arr[arrLength];

  for (int i = 0; i < arrLength; i++)
  {
    arr[i] = RandomNumber(1, 100);
  }

  cout << "Array Elements: ";

  for (int j = 0; j < arrLength; j++)
  {
    cout << arr[j] << " ";
  }
  cout << "\n";

  int min = arr[arrLength - 1];

  for (int i = 0; i < arrLength; i++)
  {
    if (arr[i] < min)
    {
      min = arr[i];
    }
  }

  cout << "Min Number is: " << min;
}

int main()
{
  // Seed the random number generator in c++, call it only once.
  srand((unsigned)time(NULL));

  int arrLength = ReadArrayLength();

  PrintArray(arrLength);

  return 0;
}
