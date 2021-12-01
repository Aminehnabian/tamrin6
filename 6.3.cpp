#include <iostream>
using namespace std;


int binarysearch(int A[], int less, int more, int n)
{
	if (more >= less)
	{
		int mid = less + (more - 1) / 2;

		if (A[mid] == n)
		{
			return mid;
		}
		else if (A[mid] > n)
		{
			return binarysearch(A, less, mid - 1, n);
		}
		else
		{
			return binarysearch(A, mid + 1, more, n);
		}
	}

	return -1;
}

int main()
{
	int A[] = { 3, 12, 20, 23, 36, 74, 83, 97 };
	int number;
	cout << "please enter your number between { 3, 12, 20, 23, 36, 74, 83, 97 } : ";
	cin >> number;
	
	int x = binarysearch(A, 0, 8 - 1, number);
	if (x == -1)
	{
		cout << "this selected number is incorrect !";
	}
	else
	{
		cout << x;
	}

	system("pause");
	return 0;
}




