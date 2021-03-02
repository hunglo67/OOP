#include <iostream>

using namespace std;

int main()
{
	int c = 0;
	int n;
	cin >> n;
	if (n < 0)
	{
		n = n * (-1);
	}
	while (n >= 10)
	{
		n = n / 10;
		c++;
	}
	cout << "Number of digits:" << c + 1;
	return 0;
}
