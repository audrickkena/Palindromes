// main file
#include <iostream>

using std::string; using std::cout;

void isPalindrome(string toCheck)
{
	if (toCheck.length() == 1)
	{
		cout << toCheck << " is not a palindrome";
	}
	else
	{
		int lim = (toCheck.length() / 2);
		for (int i = 0; i < lim; i++)
		{
			if (toCheck[i] != toCheck[toCheck.length() - i - 1])
			{
				cout << toCheck << " is not a palindrome";
			}
		}
		cout << toCheck << " is a palindrome";
	}
}

int main() 
{
	string word = "deed";
	isPalindrome(word);
	return 0;
}