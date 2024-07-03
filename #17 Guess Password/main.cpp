#include <iostream>
using namespace std;

bool GuessPassword(string password)
{
  string word = "";
  int guess_count = 0;

  // ASCII value for A = 65, C = 67, Z = 90
  // the time complexity of generating all possible words from "AAA" to "ZZZ" will be O(26^3), which is O(17576).

  for (int i = 65; i <= 90; i++)
  {
    for (int j = 65; j <= 90; j++)
    {
      for (int k = 65; k <= 90; k++)
      {
        guess_count++;
        // Directly construct and print the word
        // cout << char(i) << char(j) << char(k) << "\n";
        word = word + char(i);
        word = word + char(j);
        word = word + char(k);

        cout << "Trails [" << guess_count << "] : " << word << endl;

        if (word == password)
        {
          cout << "Password is " << password;
          cout << " Found after " << guess_count << " Trail(s).";
          return true;
        }

        word = "";
      }
    }
  }

  return false;
}

string ReadPassword()
{
  string password = "";

  cout << "Please Enter a Three Cabital Letters Password \n";

  cin >> password;

  return password;
}

int main()
{
  GuessPassword(ReadPassword());
}
