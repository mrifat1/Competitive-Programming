#include <iostream>
using namespace std;
int main()
{
    int x, n;
    cout << "Enter the number of items:"
         << "\n";
    cin >> n;
    int *arr = new int(n);
    cout << "Enter " << n << " items" << endl;
    for (x = 0; x < n; x++)
    {
        cin >> arr[x];
    }
    cout << "You entered: ";
    for (x = n - 1; x >= 0; x--)
    {
        cout << arr[x] << " ";
    }
    return 0;
}