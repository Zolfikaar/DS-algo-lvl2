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
  };

  return charType;
}

string GenerateRandomKey()
{
  string key = "";

  while (key.length() != 4)
  {
    key += GetRandomCharacter(enCharType::capital_letter);
  }

  if (key.length() >= 4)
  {
    key += "-";
  }

  while (key.length() != 9)
  {
    key += GetRandomCharacter(enCharType::capital_letter);
  }

  if (key.length() >= 9)
  {
    key += "-";
  }

  while (key.length() != 14)
  {
    key += GetRandomCharacter(enCharType::capital_letter);
  }

  if (key.length() >= 14)
  {
    key += "-";
  }

  while (key.length() != 19)
  {
    key += GetRandomCharacter(enCharType::capital_letter);
    break;
  }

  return key;
}

void KeyTrails(int keys_count)
{
  for (int i = 0; i < keys_count; i++)
  {
    string key = GenerateRandomKey();

    cout << "Key [" << i + 1 << "]: " << key << endl;
  }
}

int ReadKeyCount()
{
  cout << "Please Enter How Many Key(s) You Want!" << endl;

  int key_count = 0;

  cin >> key_count;

  return key_count;
}

int main()
{
  // Seed the random number generator in c++, call it only once.
  srand((unsigned)time(NULL));

  KeyTrails(ReadKeyCount());

  return 0;
}
