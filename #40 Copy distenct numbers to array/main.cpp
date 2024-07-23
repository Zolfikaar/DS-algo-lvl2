#include <iostream>
#include <cstdlib>
using namespace std;

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

bool Contains(int arr[], int arrLength, int item)
{
  for (int i = 0; i < arrLength; i++)
  {
    if (arr[i] == item)
    {
      return true;
    }
  }
  return false;
}

void CopyDistenctNumbersUsingAddArrayElement(int arrSource[100], int arrDestination[100], int arrLength, int &arrDestinationLength)
{
  for (int i = 0; i < arrLength; i++)
  {
    if (!Contains(arrDestination, arrDestinationLength, arrSource[i]))
    {
      AddArrayElement(arrSource[i], arrDestination, arrDestinationLength);
    }
  }
}

int main()
{
  // Seed the random number generator in c++, call it only once.
  srand((unsigned)time(NULL));

  int arr[9] = {10, 10, 10, 50, 50, 70, 70, 70, 90}, arr2Length = 0;

  int arr2[100];
  CopyDistenctNumbersUsingAddArrayElement(arr, arr2, 9, arr2Length);

  cout << "\nArray 1 elements:\n";
  PrintArray(arr, 9);

  cout << "\nArray of Distenct number(s):\n";
  PrintArray(arr2, arr2Length);

  return 0;
}
