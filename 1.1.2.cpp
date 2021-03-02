#include <stdlib.h>
#include <stdio.h>
#include<math.h>
#include<iostream>
using namespace std;
int main()
{
	int n;
	int sum = 0, i = 0;
	cin >> n;
	if (n > 0) {
		while (i <= n)
		{
			sum = sum + i;
			i++;
		}
		cout << sum;
	}
	else
	{
		cout << "n is wrong";
	}
	return(0);
}
