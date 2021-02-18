#include<iostream>
using namespace std;
int main()
{

	int n;
	cin >> n;
	if (n < 1 || n>9)
	{
		cout << " n is wrong";
	}
	else
	{
		for (int i = 0; i <= n; i++)
		{
			for (int j = 0; j <= i; j++)
			{
				if (j == i)
					cout << j;
				else
					cout << j << " ";
			}
			if (i != n)
				cout << endl;
		}
	}
	return (0);
}