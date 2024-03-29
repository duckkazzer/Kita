#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

bool pal(string word)
{
	int len = word.length();
	for (int i = 0; i < len / 2; ++i)
	{
		if (word[i] != word[len - i - 1])
		{
			return false;
		}
	}
	return true;
}

int main()
{
	string str;
	cout << "Enter the word:";
	cin >> str;

	if (pal(str))
	{
		cout << "Indeed, it's palindrome.";
	}
	else
	{
		cout << "Nope, it's not a palindrome";
	}
	return 0;
}