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
        cout<<str<<endl;
    }

    return 0;
}
void revstr(char str[])
{
    char str2[1000];
    int i,j,len;

    len=strlen(str); 

    for(j=len-1,i=0;i<len;i++,j--) 
        str2[i]=str[j];
    str2[len]='\0';

    for(i=0;str2[i];i++) 
        str[i]=str2[i];     
}

