#include <bits/stdc++.h>
using namespace std;
int binarySearch(int arr[], int l, int r, int x)
{
	while (l <= r) {
		int m = l + (r - l) / 2;

        if (arr[m] == x)
			return m;


		if (arr[m] < x)
			l = m + 1;


		else
			r = m - 1;
	}
	return -1;
}

int main()
{
	int arr[1000];
	int x = 10;
	int n;
	cin>>n;
	for(int i = 0;i < n; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);

	int result = binarySearch(arr, 0, n-1 , x);
	(result == -1) ? cout << "Element is not present in array"
				: cout << "Element is present at index " << result;
	return 0;
}