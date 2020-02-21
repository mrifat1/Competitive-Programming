#include <bits/stdc++.h> 
using namespace std; 
string findLongestPalindrome(string str) 
{ 
	
	int count[256] = { 0 }; 

	
	for (int i = 0; i < str.size(); i++) 
		count[str[i]]++; 

	
	string beg = "", mid = "", end = ""; 

	
	for (char ch = 'a'; ch <= 'z'; ch++) 
	{ 
	
		if (count[ch] & 1) 
		{ 
		
			mid = ch; 

			
			count[ch--]--; 
		} 

		
		else
		{ 
			
			for (int i = 0; i < count[ch]/2 ; i++) 
				beg.push_back(ch); 
		} 
	} 


	end = beg; 
	reverse(end.begin(), end.end()); 

	
	return beg + mid + end; 
} 


int main() 
{ 
	string str = "abcd"; 



	cout << findLongestPalindrome(str); 

	return 0; 
} 
