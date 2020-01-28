#include <bits/stdc++.h>

using namespace std;

void revstr(char str[]);

int main()
{
    char str[1000];
    int i;

    while(scanf(" %[^\n]",&str)==1)
    {

        revstr(str);
        revstr(str2);//calling string reverse function.
        cout<<str2<<endl;
        //cout<<str<<endl;
    }

    return 0;
}
void revstr(char str[])
{
    char str2[1000];
    int i,j,len;

    len=strlen(str); //counting string length.

    for(j=len-1,i=0;i<len;i++,j--) //here,last element of str is storing
                                    //on the 1st element of str2 and so on.
        str2[i]=str[j];
        str2[len]='\0';
}
