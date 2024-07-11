#include <iostream>
#include <vector>
#include <random>
#include <ctime>
using namespace std;

// Function to generate a random number between 'from' and 'to'
int RandomNumber(int from, int to)
{
  static random_device rd;                    // Seed for the random number engine
  static mt19937 gen(rd());                   // Mersenne Twister engine
  uniform_int_distribution<> distr(from, to); // Uniform distribution

  return distr(gen);
}

// Function to read the array length from the user with input validation
int ReadArrayLength()
{
  int arrLength;

  do
  {
    cout << "Enter the number of array length (positive integer): ";
    cin >> arrLength;

    if (arrLength <= 0)
    {
      cout << "Invalid input. Please enter a positive integer.\n";
    }

  } while (arrLength <= 0);

  return arrLength;
}

// Function to fill an array with random numbers
void FillArray(vector<int> &arr, int from, int to)
{
  for (int &num : arr)
  {
    num = RandomNumber(from, to);
  }
}

// Function to print an array
void PrintArray(const vector<int> &arr, const string &arrayName)
{
  cout << arrayName << " Elements: ";
  for (int num : arr)
  {
    cout << num << " ";
  }
  cout << "\n";
}

// Function to sum two arrays and return the result as a new array
vector<int> SumArrays(const vector<int> &arr1, const vector<int> &arr2)
{
  vector<int> sum(arr1.size());
  for (size_t i = 0; i < arr1.size(); ++i)
  {
    sum[i] = arr1[i] + arr2[i];
  }
  return sum;
}

int main()
{
  // Seed the random number generator once
  srand(static_cast<unsigned>(time(0)));

  // Read the array length from the user
  int arrLength = ReadArrayLength();

  // Create vectors for the arrays
  vector<int> arr1(arrLength);
  vector<int> arr2(arrLength);

  // Fill the arrays with random numbers
  FillArray(arr1, 1, 100);
  FillArray(arr2, 1, 100);

  // Print the arrays
  PrintArray(arr1, "Array 1");
  PrintArray(arr2, "Array 2");

  // Sum the arrays and print the result
  vector<int> sumOfArrays = SumArrays(arr1, arr2);
  PrintArray(sumOfArrays, "The Sum of Array 1 and Array 2");

  return 0;
}
