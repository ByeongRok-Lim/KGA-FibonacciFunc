#include <iostream>

using namespace std;

int Fibonacci(int count);

int main()
{
	int fibonacciCount = 10;

	for (int i = 1; i < fibonacciCount+1; i++)
	{
		cout << Fibonacci(i) << endl;
	}
	return 0;
}

int Fibonacci(int count)
{
	if (count == 1)
	{
		return 0;
	}
	else if(count == 2)
	{
		return 1;
	}
	return Fibonacci(count - 1)+ Fibonacci(count - 2);
}
