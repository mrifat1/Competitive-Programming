#include<stdio.h>
using namespace std;
int main()
{
    string c,d;
    int len1,len2;
    len1=strlen(c);
    len2=strlen(d);

    if(len1=len2)
        cout<<"0\n";
    else if(len1<len2)
        cout<<"-1\n";
    else
        cout<<"1\n";

    return 0;
}
