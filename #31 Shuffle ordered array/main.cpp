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

void ShuffleArray(int arr[100], int arrLength)
{
  for (int i = 0; i < arrLength; i++)
  {
    Swap(arr[RandomNumber(1, arrLength) - 1], arr[RandomNumber(1, arrLength) - 1]);
  }
}

int main()
{
  // Seed the random number generator in c++, call it only once.
  srand((unsigned)time(NULL));

  int arr[100];
  int arrLength = ReadArrayLength();

  FillArray(arr, arrLength);

  cout << "Array Elements before shuffle: ";
  PrintArray(arr, arrLength);

  ShuffleArray(arr, arrLength);

  cout << "Array Elements after shuffle: ";
  PrintArray(arr, arrLength);

  return 0;
}
