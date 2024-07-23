#include <iostream>
#include <cstdlib>
#include <cmath>
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

bool isPrime(int n)
{
  if (n <= 1)
  {
    return false;
  }

  for (int i = 2; i <= sqrt(n); i++)
  {
    if (n % i == 0)
    {
      return false;
    }
  }

  return true;
}

void AddArrayElement(int Number, int arr[100], int &arrLength)
{
  // its a new element so we need to add the length by 1
  arrLength++;
  arr[arrLength - 1] = Number;
}

void CopyPrimeNumbersUsingAddArrayElement(int arrSource[100], int arrDestination[100], int arrLength, int &arrDestinationLength)
{
  for (int i = 0; i < arrLength; i++)
  {
    int element = arrSource[i];

    if (isPrime(element))
    {
      AddArrayElement(element, arrDestination, arrDestinationLength);
    }
  }
}

int main()
{
  // Seed the random number generator in c++, call it only once.
  srand((unsigned)time(NULL));

  int arr[100], arrLength = 0, arr2Length = 0;
  FillArrayWithRandomNumbers(arr, arrLength);

  int arr2[100];
  CopyPrimeNumbersUsingAddArrayElement(arr, arr2, arrLength, arr2Length);

  cout << "\nArray 1 elements:\n";
  PrintArray(arr, arrLength);

  if (arr2Length > 0)
  {
    cout << "\nArray of Prime number(s):\n";
    PrintArray(arr2, arr2Length);
  }
  else
  {
    cout << "\nThere is no prime number(s)\n";
  }

  return 0;
}
