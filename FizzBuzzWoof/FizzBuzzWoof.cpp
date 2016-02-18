#include <iostream>
using namespace std;


int main()
{
	int i;
	for (i = 1; i <= 50; i++)
	{
		// Check Divisibility by 3
		if (i % 3 == 0)
		{
			cout << "Fizz ";
		}

		// Check Divisibility by 5
		if (i % 5 == 0)
		{
			cout << "Buzz ";
		}

		// Check Divisibility by 7
		if (i % 7 == 0)
		{
			cout << "Woof ";
		}

		// Default case if it isn't divisible by either 3 or 5
		if (!(i % 3 == 0) && !(i % 5 == 0) && !(i % 7 == 0))
		{
			cout << i;
		}

		// moves cursor to new line
		cout << endl;
	}// for i
}// main method
