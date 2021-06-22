// checker file
#include <iostream>
#include <algorithm> // for remove and remove_if
#include <functional> // for std::not1
//#include <locale>
//#include <string>

using std::string; using std::transform;
using std::remove_copy_if; using std::back_inserter;
using std::ptr_fun; using std::not1;

// to use as predicate for what to remove in string input
bool toRemove(unsigned char c) {
	return (c == ' ' || c == '\n' || c == '\r' ||
		c == '\t' || c == '\v' || c == '\f' || c == ',' ||
		c == '.' || c == '/' || c == '!' || c == '?' || c == ':' ||
		c == '-' || c == '--');
}

// to return a string that only contains lowercase alphabetical chars
string cleanInp(const string &inp)
{
	string result;
	result.reserve(inp.length());

	// copies from inp everything except what returns pred as true, in this case, anything that is NOT an alphabeti char. it is inserted using back inserter iterator into result
	remove_copy_if(inp.begin(), inp.end(), back_inserter(result), not1(ptr_fun(isalpha)));
	transform(result.begin(), result.end(), result.begin(), ::tolower); // turn whole string to lowercase
	return result;
}

// full implementation, copies param instead to allow for temp changes
bool isPalindrome(string toCheck)
{
	if (toCheck.length() == 0)
	{
		return false;
	}
	else
	{
		string cleanedInp = cleanInp(toCheck);
		int lim = (cleanedInp.length() / 2);
		for (int i = 0; i < lim; i++)
		{
			if (cleanedInp[i] != cleanedInp[cleanedInp.length() - i - 1])
			{
				return false;
			}
		}
		return true;
	}
}

// using const reference param in function to avoid copying string and to make sure orig string not modified.
//bool isWordPalindrome(const string& toCheck)
//{
//	if (toCheck.length() == 0)
//	{
//		return false;
//	}
//	else
//	{
//		int lim = (toCheck.length() / 2);
//		for (int i = 0; i < lim; i++)
//		{
//			if (toCheck[i] != toCheck[toCheck.length() - i - 1])
//			{
//				return false;
//			}
//		}
//		return true;
//	}
//}