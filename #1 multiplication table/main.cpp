#include <iostream>
using namespace std;

void drow_header()
{
  cout << "\t";
  for (int i = 1; i <= 10; i++)
  {
    cout << i << "\t";
  }
  cout << "\n_____________________________________________________________________________________________\n";
}

string col_separator(int num)
{
  if (num < 10)
  {
    return "   |";
  }
  else
  {
    return "  |";
  }
}

void drow_table()
{
  drow_header();

  for (int i = 1; i <= 10; i++)
  {
    cout << " " << i << col_separator(i) << "\t";

    for (int j = 1; j <= 10; j++)
    {
      cout << i * j << "\t";
    }
    cout << endl;
  }
}

int main()
{

  drow_table();

  return 0;
}