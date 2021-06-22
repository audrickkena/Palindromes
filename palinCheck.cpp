// Palindrome checker. Accepts a string parameter and returns string output (void function)
// Palindrome is a word, phrase or sentence that is read the same, forwards or backwards.

#include <iostream>
#include "palinCheck.h";

using std::string; using std::cout;
// Assume string input is only one word
void isPalindrome(string toCheck)
{
	if (toCheck.length() == 1 || toCheck.length() % 2 == 0)
	{
		cout << toCheck << " is not a valid palindrome\n";
	}
	else
	{
		cout << toCheck << " is a valid palindrome\n";
	}
}