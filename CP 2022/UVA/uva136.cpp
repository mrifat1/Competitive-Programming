#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    set<long long> st;
    long long arr[1600];

    arr[1] = 1,
    st.insert(1);
    int i;
    long long x;
    int j = 2;

    for (i = 1; i < 1500; i++)
    {
        auto it = st.begin();
        // cout << *it << endl;
        // j = *it;
        // x = arr[i - 1];
        x = *it;

        st.erase(it);

        st.insert(x * 2);
        st.insert(x * 3);
        st.insert(x * 5);
        // arr[j] = x * 2;
        // arr[j + 1] = x * 3;
        // arr[j + 2] = x * 5;
        // j += 3;
        // cout << j << endl;
    }
    // sort(arr, arr + 17);
    cout << "The 1500'th ugly number is " << *st.begin() << ".\n";

    return 0;
}