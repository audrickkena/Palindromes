// main file
#include <iostream>
#include <conio.h>
#include <string>

using std::string; using std::cout;
using std::cin; 

// references isPalindrome function in palindromeCheck.cpp
bool isPalindrome(const string& toCheck);

int main() 
{
	int procLength;
	string userInp;
	cout << "Enter number of words to process: ";
	cin >> procLength;
	cin.ignore(); //cin leaves \n char in buffer so use cin.ignore to get rid of extra chars before using getline()
	for (int i = 0; i < procLength; i++)
	{
		cout << "Enter palindrome to process: ";
		getline(cin, userInp);
		if (isPalindrome(userInp))
		{
			cout << userInp << " is a palindrome\n";
		}
		else
		{
			cout << userInp << " is not a palindrome\n";
		}
		
	}
	return 0;
}