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

  int sum = 0;

  for (int i = 0; i < arrLength; i++)
  {

    sum += arr[i];
  }

  int avg = sum / arrLength;

  cout << "Average of all numbers is: " << avg;
}

int main()
{
  // Seed the random number generator in c++, call it only once.
  srand((unsigned)time(NULL));

  int arrLength = ReadArrayLength();

  PrintArray(arrLength);

  return 0;
}
