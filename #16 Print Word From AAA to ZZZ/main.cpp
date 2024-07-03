#include <iostream>
using namespace std;

void PeintWord()
{
  string word = "";
  // ASCII value for A = 65, C = 67, Z = 90
  // the time complexity of generating all possible words from "AAA" to "ZZZ" will be O(26^3), which is O(17576).

  for (int i = 65; i <= 67; i++)
  {
    for (int j = 65; j <= 67; j++)
    {
      for (int k = 65; k <= 67; k++)
      {
        // Directly construct and print the word
        cout << char(i) << char(j) << char(k) << "\n";
      }
    }
  }
}

int main()
{
  PeintWord();
}
