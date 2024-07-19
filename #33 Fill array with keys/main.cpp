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

string GenerateWord(enCharType CharType, short Length)
{
  string Word;
  for (int i = 1; i <= Length; i++)
  {
    Word = Word + GetRandomCharacter(CharType);
  }
  return Word;
}

string GenerateRandomKey()
{
  string key = "";

  key = GenerateWord(enCharType::capital_letter, 4) + "-";
  key = key + GenerateWord(enCharType::capital_letter, 4) + "-";
  key = key + GenerateWord(enCharType::capital_letter, 4) + "-";
  key = key + GenerateWord(enCharType::capital_letter, 4);
  return key;
}

void KeyTrails(int keys_count)
{
  string keysArray[keys_count];

  for (int i = 0; i < keys_count; i++)
  {
    string key = GenerateRandomKey();

    keysArray[i] = key;
  }

  cout << "\nArray Elements:\n";

  for (int i = 0; i < keys_count; i++)
  {
    cout << "Array[" << i << "]: " << keysArray[i] << endl;
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

  int keyCount = ReadKeyCount();

  //

  KeyTrails(keyCount);

  return 0;
}
