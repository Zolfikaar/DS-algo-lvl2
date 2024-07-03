#include <iostream>
#include <string>
using namespace std;

int ReadPositiveNumber(string Message)
{
    int Number = 0;

    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);

    return Number;
}

void PrintDigits(int Number)
{
    int remainder = 0;

    while (Number > 0)
    {
        remainder = Number % 10;
        Number = Number / 10;
        cout << remainder << endl;
    }
}

int main()
{
    PrintDigits(ReadPositiveNumber("Please Enter A Positive Number"));
}