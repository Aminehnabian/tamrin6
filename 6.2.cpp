#include <iostream>
using namespace std;

int fibo(int n);
int main()
{
	int i;
	cout << "please enter n : ";
	cin >> i;
	
	cout << fibo(i-1) << "\n";

	system("pause");
	return 0;
}

int fibo(int n)
{
	if (n == 0) return 0;
	if (n == 1) return 1;

	int a = 0;
	int b = 1;
	int i;
	int c;
	for (i = 2; i <= n; i++)
	{
		c = a + b;
		a = b;
		b = c;
	}

	return c;
}