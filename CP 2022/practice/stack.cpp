// // C++ program to decode a string recursively
// // encoded as count followed substring
// #include<bits/stdc++.h>
// using namespace std;

// // Returns decoded string for 'str'
// string decode(string str)
// {
// 	stack<int> integerstack;
// 	stack<char> stringstack;
// 	string temp = "", result = "";

// 	// Traversing the string
// 	for (int i = 0; i < str.length(); i++)
// 	{
// 		int count = 0;

// 		// If number, convert it into number
// 		// and push it into integerstack.
// 		if (str[i] >= '0' && str[i] <='9')
// 		{
// 			while (str[i] >= '0' && str[i] <= '9')
// 			{
// 				count = count * 10 + str[i] - '0';
// 				i++;
// 			}

// 			i--;
// 			integerstack.push(count);
// 		}

// 		// If closing bracket ']', pop element until
// 		// '[' opening bracket is not found in the
// 		// character stack.
// 		else if (str[i] == ']')
// 		{
// 			temp = "";
// 			count = 0;

// 			if (! integerstack.empty())
// 			{
// 				count = integerstack.top();
// 				integerstack.pop();
// 			}

// 			while (! stringstack.empty() && stringstack.top()!='[' )
// 			{
// 				temp = stringstack.top() + temp;
//                 cout<<"temp "<<temp<<endl;
// 				stringstack.pop();
// 			}

// 			if (! stringstack.empty() && stringstack.top() == '[')
// 				stringstack.pop();

// 			// Repeating the popped string 'temo' count
// 			// number of times.
// 			for (int j = 0; j < count; j++){
// 				result = result + temp;
//             }
//             cout<<"res "<<result<<endl;

// 			// Push it in the character stack.
// 			for (int j = 0; j < result.length(); j++)
// 				stringstack.push(result[j]);

// 			result = "";
// 		}

// 		// If '[' opening bracket, push it into character stack.
// 		else if (str[i] == '[')
// 		{
// 			if (str[i-1] >= '0' && str[i-1] <= '9')
// 				stringstack.push(str[i]);

// 			else
// 			{
// 				stringstack.push(str[i]);
// 				integerstack.push(1);
// 			}
// 		}

// 		else
// 			stringstack.push(str[i]);
// 	}

// 	// Pop all the element, make a string and return.
// 	while (! stringstack.empty())
// 	{
// 		result = stringstack.top() + result;
// 		stringstack.pop();
// 	}

// 	return result;
// }

// // Driven Program
// int main()
// {
// 	string str = "3[b2[ca]]";
// 	cout << decode(str) << endl;
// 	return 0;
// }
// C++ code to find
// duplicates in O(n) time
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int numRay[] = { 0, 4, 3, 11, 7, 8, 11, 3, 1 };
	int arr_size = sizeof(numRay) / sizeof(numRay[0]);
	// count the frequency
	for (int i = 0; i < arr_size; i++) {
		numRay[numRay[i] % arr_size]
			= numRay[numRay[i] % arr_size] + arr_size;
	}
	cout << "The repeating elements are : " << endl;
	for (int i = 0; i < arr_size; i++) {
		if (numRay[i] >= arr_size * 2) {
			cout << i << " " << endl;
		}
	}
	return 0;
}

// This code is contributed by aditya kumar (adityakumar129)
