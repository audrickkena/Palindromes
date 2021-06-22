// main file
#include <iostream>

using std::string; using std::cout;

bool isPalindrome(string toCheck)
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

int main() 
{
	string word = "deed";
	if (isPalindrome(word) == true)
	{
		cout << word << " is a palindrome";
	}
	else
	{
		cout << word << " is not a palindrome";
	}
	return 0;
}