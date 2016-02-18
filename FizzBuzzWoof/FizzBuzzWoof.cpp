#include <iostream>
using namespace std;


int main()
{
	int i;
	for (i = 1; i <= 20; i++)
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

		
		cout << endl;
	}// for i
}// main method
