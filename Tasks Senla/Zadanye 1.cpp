#include "pch.h"
#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	int i, j, k, N;
	cout << "Enter your number:";
	cin >> N;
	for (i = 1; i <= N; i++)
	{
		j = 0;
		k = 0;
		while (++j <= i)
		{
			if (i%j == 0)
			{
				k += j;
			}
		}
		if (k - 1 == i)
			printf("%d\t", i);

	}
	cin.get();
}