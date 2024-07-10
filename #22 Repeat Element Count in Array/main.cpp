#include <iostream>
#include <cstdlib>
using namespace std;

int ReadArrayLength()
{
  cout << "Please Enter A Positive Number For Array Length" << endl;

  int length = 0;

  cin >> length;

  return length;
}

void ArrayElements(int length)
{
  int ElementsArray[length] = {};

  for (int i = 1; i <= length; i++)
  {
    int element = 0;
    cin >> element;
    cout << "Element [" << i << "]: " << element;
    ElementsArray[i - 1] = element;
  }

  cout << endl
       << "Original Array: " << ElementsArray << endl;
  // return ElementsArray;
}

int main()
{
  ArrayElements(ReadArrayLength());

  return 0;
}
