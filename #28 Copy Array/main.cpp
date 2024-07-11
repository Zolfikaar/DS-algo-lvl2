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

  cout << "\nEnter the number of array length: \n";

  cin >> arrLength;

  return arrLength;
}

void PrintArray(int arrLength)
{
  int arr[arrLength], arr2[arrLength];

  for (int i = 0; i < arrLength; i++)
  {
    arr[i] = RandomNumber(1, 100);
    arr2[i] = arr[i];
  }

  cout << "Array 1 Elements: ";

  for (int j = 0; j < arrLength; j++)
  {
    cout << arr[j] << " ";
  }
  cout << "\n";

  cout << "Array 2 Elements: ";

  for (int k = 0; k < arrLength; k++)
  {
    cout << arr2[k] << " ";
  }
  cout << "\n";
}

int main()
{
  // Seed the random number generator in c++, call it only once.
  srand((unsigned)time(NULL));

  int arrLength = ReadArrayLength();

  PrintArray(arrLength);

  return 0;
}
