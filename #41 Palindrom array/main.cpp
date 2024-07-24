#include <iostream>
using namespace std;

void FillArray(int array[100], int &length)
{
  length = 6;
  array[0] = 10;
  array[1] = 20;
  array[2] = 30;
  array[3] = 30;
  array[4] = 20;
  array[5] = 10;
}

void PrintArray(int arr[100], int arrLength)
{
  for (int i = 0; i < arrLength; i++)
    cout << arr[i] << " ";
  cout << "\n";
}

bool CheckPalindromArray(int arr[100], int Length)
{

  for (int i = 0; i < Length; i++)
  {
    if (arr[i] != arr[Length - i - 1])
    {
      return false;
    }
  }

  return true;
}

int main()
{
  int arr[100], Length = 0;
  FillArray(arr, Length);

  cout << "Array Elements:\n";

  PrintArray(arr, Length);

  if (CheckPalindromArray(arr, Length))
  {
    cout << "Yes, Its a Plindrom Array";
  }
  else
  {
    cout << "No, Its Not a Plindrom Array";
  }
}