#include<stdio.h>
#include<string.h>
int main()
{
     int i,j,k,n,l,sum,r;
     char s[1020];

    while(gets(s))
    {
        r=0;
        i=0;
        if(s[i]=='0')
            break;
        while(s[i] != '\0')
        {
           sum=r*10+(s[i]-'0');
           r=sum%17;
           i++;
        }

        if(r==0)
            printf("1\n");
        else
            printf("0\n");
    }
    return 0;
}
