#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

enum enPrimeNotPrime
{
  Prime = 1,
  NotPrime = 2
};

enPrimeNotPrime isPrime(int n)
{
  if (n <= 1)
    return enPrimeNotPrime::NotPrime;
  if (n <= 3)
    return enPrimeNotPrime::Prime;

  if (n % 2 == 0 || n % 3 == 0)
    return enPrimeNotPrime::NotPrime;

  for (int i = 5; i * i <= n; i += 6)
  {
    if (n % i == 0 || n % (i + 2) == 0)
    {
      return enPrimeNotPrime::NotPrime;
    }
  }

  return enPrimeNotPrime::Prime;
}

int RandomNumber(int from, int to)
{
  int rand_char = rand() % (to - from + 1) + from;

  return rand_char;
}

int ReadArrayLength()
{
  int arrLength;

  do
  {

    cout << "\nEnter the number of array length (positive integer): \n";

    cin >> arrLength;

    if (arrLength <= 0)
    {
      cout << "Invalid input. Please enter a positive integer.\n";
    }

  } while (arrLength <= 0);

  return arrLength;
}

void PrintArray(const vector<int> &arr, const string &arrayName)
{
  cout << arrayName << " Elements: ";
  for (int num : arr)
  {
    cout << num << " ";
  }
  cout << "\n";
}

void CreateAndPrintArrays(int arrLength)
{
  vector<int> arr(arrLength);
  vector<int> arrOfPrimes;

  // Fill the array with random numbers and identify prime numbers
  for (int &num : arr)
  {
    num = RandomNumber(1, 100);
    if (isPrime(num) == enPrimeNotPrime::Prime)
    {
      arrOfPrimes.push_back(num);
    }
  }

  // Print the arrays
  PrintArray(arr, "Array 1");
  PrintArray(arrOfPrimes, "Array of primes");
}

int main()
{
  // Seed the random number generator in c++, call it only once.
  srand((unsigned)time(NULL));

  int arrLength = ReadArrayLength();

  CreateAndPrintArrays(arrLength);

  return 0;
}
