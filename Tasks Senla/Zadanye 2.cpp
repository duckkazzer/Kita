#include "pch.h"
#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	unsigned int f1, f2, fn, N, i;
	f1 = f2 = 1;
	cout << "Enter your number:";
	cin >> N;
	cout << f1 << "\t" << f2 << " \t";
	if (N < 3)
	{
		cout << "Error, try to type something more then 2";

	}
	for (i = 3; i <= N;)
	{
		if (N >= 3)
		{
			fn = f1 + f2;
			f1 = f2;
			f2 = fn;
			i++;
			printf("%d\t", f2);

		}
	}
	cin.get();
}