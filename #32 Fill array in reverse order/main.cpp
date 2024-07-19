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

void Swap(int &A, int &B)
{
  int Temp;

  Temp = A;
  A = B;
  B = Temp;
}

void PrintArray(int arr[100], int arrLength)
{

  for (int i = 0; i < arrLength; i++)
  {
    cout << arr[i] << " ";
  }
  cout << "\n";
}

void FillArray(int arr[100], int arrLength)
{

  for (int i = 0; i < arrLength; i++)
  {
    arr[i] = i + 1;
  }
}

void CopyArrayInReverseOrder(int arr[100], int arr2[100], int arrLength)
{
  for (int i = 0; i < arrLength; i++)
  {
    arr2[i] = arr[arrLength - 1 - i];
  }
}

int main()
{
  // Seed the random number generator in c++, call it only once.
  srand((unsigned)time(NULL));

  int arr[100];
  int arrLength = ReadArrayLength();

  FillArray(arr, arrLength);

  int arr2[100];
  CopyArrayInReverseOrder(arr, arr2, arrLength);

  cout << "Array 1 Elements before copy: ";
  PrintArray(arr, arrLength);

  cout << "Array 2 Elements after copy: ";
  PrintArray(arr2, arrLength);

  return 0;
}
