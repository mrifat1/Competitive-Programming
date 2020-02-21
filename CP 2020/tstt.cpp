#include <bits/stdc++.h> 
using namespace std; 

string findLongestPalindrome(string str) 
{ 
	// to stores freq of characters in a string 
	int count[256] = { 0 }; 

	// find freq of characters in the input string 
	for (int i = 0; i < str.size(); i++) 
		count[str[i]]++; 

	// Any palindromic string consists of three parts 
	// beg + mid + end 
	string beg = "", mid = "", end = ""; 

	// solution assumes only lowercase characters are 
	// present in string. We can easily extend this 
	// to consider any set of characters 
	for (char ch = 'a'; ch <= 'z'; ch++) 
	{ 
		// if the current character freq is odd 
		if (count[ch] & 1) 
		{ 
			// mid will contain only 1 character. It 
			// will be overridden with next character 
			// with odd freq 
			mid = ch; 

			// decrement the character freq to make 
			// it even and consider current character 
			// again 
			count[ch--]--; 
		} 

		// if the current character freq is even 
		else
		{ 
			// If count is n(an even number), push 
			// n/2 characters to beg string and rest 
			// n/2 characters will form part of end 
			// string 
			for (int i = 0; i < count[ch]/2 ; i++) 
				beg.push_back(ch); 
		} 
	} 

	// end will be reverse of beg 
	end = beg; 
	reverse(end.begin(), end.end()); 

	// return palindrome string 
	return beg + mid + end; 
} 

// Driver code 
int main() 
{ 
	string str = "abcd"; 



	cout << findLongestPalindrome(str); 

	return 0; 
} 
