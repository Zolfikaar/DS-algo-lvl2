#include <iostream>
#include <cstdlib>
using namespace std;

enum enCharType
{
  small_letter = 1,
  capital_letter = 2,
  special_character = 3,
  digit = 4
};
// function to generate a random number between (1 - 10)
int RandomNumber(int from, int to)
{
  int rand_char = rand() % (to - from + 1) + from;

  return rand_char;
}

char GetRandomCharacter(enCharType charType)
{
  switch (charType)
  {
  case enCharType::small_letter:
    return char(RandomNumber(97, 122));
    break;

  case enCharType::capital_letter:
    return char(RandomNumber(65, 90));
    break;

  case enCharType::special_character:
    return char(RandomNumber(33, 47));
    break;

  case enCharType::digit:
    return char(RandomNumber(48, 57));
    break;

  default:
    break;
  }
}

int main()
{
  // Seed the random number generator in c++, call it only once.
  srand((unsigned)time(NULL));

  cout << GetRandomCharacter(enCharType::small_letter) << endl;
  cout << GetRandomCharacter(enCharType::capital_letter) << endl;
  cout << GetRandomCharacter(enCharType::special_character) << endl;
  cout << GetRandomCharacter(enCharType::digit) << endl;

  return 0;
}
