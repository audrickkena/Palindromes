// checker file
#include <iostream>
using std::string;

// using const reference param in function to avoid copying string and to make sure orig string not modified.
bool isPalindrome(const string& toCheck)
{
	if (toCheck.length() == 1)
	{
		return false;
	}
	else
	{
		int lim = (toCheck.length() / 2);
		for (int i = 0; i < lim; i++)
		{
			if (toCheck[i] != toCheck[toCheck.length() - i - 1])
			{
				return false;
			}
		}
		return true;
	}
}