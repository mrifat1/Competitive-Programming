/* This program sort the input strings and its subsequent substrings in
 * an ascending order and display it
 */
#include <bits/stdc++.h>
using namespace std;

void sortString(char str[25][25], int count)
{
    char temp[25];
    for (int i = 0; i < count; i++)
        for (int j = i + 1; j < count; j++)
        {
            if (strcmp(str[i], str[j]) > 0)
            {
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
    printf("\n Order of Sorted Strings:");
    for (int i = 0; i < count; i++)
        cout << str[i] << endl;
}

int main()
{
    int i, j, count, index;
    char str[25][25], temp[25];
    char str2[25][25];
    puts("How many strings u are going to enter?: ");
    scanf("%d", &count);

    puts("Enter Strings one by one: ");
    for (i = 0; i < count; i++)
        cin >> str[i];

    sortString(str, count);

    cin >> index;
    int m = 0;
    index = index - 1;
    for (i = 0; i < count; i++)
    {
        int k = 0;
        if (strlen(str[i]) > index)
        {
            for (j = index; j < strlen(str[i]); j++)
            {
                str2[m][k++] = str[i][j];
            }
            str2[m][k] = '\0';
            m++;
        }
    }

    for (i = 0; i < m; i++)
        cout << str2[i] << endl;

    sortString(str2, m);

    return 0;
}