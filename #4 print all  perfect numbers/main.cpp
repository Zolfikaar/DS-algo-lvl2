#include <iostream>
#include <string>
using namespace std;

int readPositiveNumber(string message)
{
	int Number = 0;

	do
	{
		cout << message;
		cin >> Number;
	} while (Number <= 0);

	return Number;
}

bool isPerfectNumber(int Number)
{
	int Sum = 0;

	for (int i = 1; i < Number; i++)
	{
		if (Number % i == 0)
		{
			Sum += i;
		}
	}

	return Number == Sum;
}

void printResult(int number)
{
	if (isPerfectNumber(number))
	{
		cout << number << " Is a perfect number";
	}
	else
	{
		cout << number << " Is not a perfect number";
	}
}

void printPerfectNumbersFrom1ToN(int number)
{
	for (int i = 1; i < number; i++)
	{
		if (isPerfectNumber(i))
		{
			cout << i << endl;
		}
	}
}

int main()
{
	printPerfectNumbersFrom1ToN(readPositiveNumber("Please enter a positive number \n"));
	return 0;
}