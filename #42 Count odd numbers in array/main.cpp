#include <iostream>
#include <cstdlib>
using namespace std;

int RandomNumber(int from, int to)
{
  int rand_char = rand() % (to - from + 1) + from;

  return rand_char;
}

void FillArrayWithRandomNumbers(int arr[100], int &arrLength)
{
  cout << "\nEnter number of elements:\n";
  cin >> arrLength;
  for (int i = 0; i < arrLength; i++)
    arr[i] = RandomNumber(1, 100);
}

void PrintArray(int arr[100], int arrLength)
{
  for (int i = 0; i < arrLength; i++)
    cout << arr[i] << " ";
  cout << "\n";
}

int CountOddNumbersInArray(int arrSource[100], int arrLength)
{
  int count = 0;
  for (int i = 0; i < arrLength; i++)
    if (arrSource[i] % 2 != 0)
    {
      count++;
    }

  return count;
}

int main()
{
  // Seed the random number generator in c++, call it only once.
  srand((unsigned)time(NULL));

  int arr[100], arrLength = 0;
  FillArrayWithRandomNumbers(arr, arrLength);

  int OddCount = CountOddNumbersInArray(arr, arrLength);

  cout << "\nArray Elements:\n";
  PrintArray(arr, arrLength);
  cout << "\nOdd Numbers count is: " << OddCount << endl;

  return 0;
}
