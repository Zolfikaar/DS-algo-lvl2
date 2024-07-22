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

void AddArrayElement(int Number, int arr[100], int &arrLength)
{
  // its a new element so we need to add the length by 1
  arrLength++;
  arr[arrLength - 1] = Number;
}

void CopyArrayUsingAddArrayElement(int arrSource[100], int arrDestination[100], int arrLength, int &arrDestinationLength)
{
  for (int i = 0; i < arrLength; i++)
    if (arrSource[i] % 2 != 0)
    {
      int element = arrSource[i];
      AddArrayElement(element, arrDestination, arrDestinationLength);
    }
}

int main()
{
  // Seed the random number generator in c++, call it only once.
  srand((unsigned)time(NULL));

  int arr[100], arrLength = 0, arr2Length = 0;
  FillArrayWithRandomNumbers(arr, arrLength);

  int arr2[100];
  CopyArrayUsingAddArrayElement(arr, arr2, arrLength, arr2Length);

  cout << "\nArray 1 elements:\n";
  PrintArray(arr, arrLength);
  cout << "\nArray of odd:\n";
  PrintArray(arr2, arr2Length);

  return 0;
}
