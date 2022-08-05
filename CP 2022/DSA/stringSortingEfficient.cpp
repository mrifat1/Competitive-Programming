/* This program sort the input strings and its subsequent substrings in
 * an ascending order and display it
 */
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, j, count, index;
    string str[25];
    string str2[25];
    // string str3;
    puts("How many strings u are going to enter?: ");
    scanf("%d", &count);

    puts("Enter Strings one by one: ");
    for (i = 0; i < count; i++)
        cin >> str[i];

    sort(str, str + count);

    printf("Order of Sorted Strings:\n");
    for (int i = 0; i < count; i++)
        cout << str[i] << endl;

    cin >> index;
    int m = 0;
    index = index - 1;
    for (i = 0; i < count; i++)
    {
        int k = 0;
        string str3;
        if (str[i].size() > index)
        {
            for (j = index; j < str[i].size(); j++)
            {
                str3 = str3 + str[i][j];
            }
            str2[m++].append(str3);
        }
    }

    sort(str2, str2 + m);
    printf("Order of Sorted SubStrings:\n");
    for (int i = 0; i < m; i++)
        cout << str2[i] << endl;

    return 0;
}