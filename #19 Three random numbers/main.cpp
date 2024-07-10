#include <iostream>
#include <cstdlib>
using namespace std;

// function to generate a random number between (1 - 10)
int RandomNumber(int from, int to)
{

  int rand_num = rand() % (to - from + 1) + from;
  return rand_num;
}

int main()
{
  // Seed the random number generator in c++, call it only once.
  srand((unsigned)time(NULL));

  cout << RandomNumber(1, 10) << endl;
  cout << RandomNumber(1, 10) << endl;
  cout << RandomNumber(1, 10) << endl;

  return 0;
}
