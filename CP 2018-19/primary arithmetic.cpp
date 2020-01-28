#include<bits/stdc++.h>
using namespace std;
int main()
{
    //string a,b;
    long long a,b,i,j,k,l,m,c,d,carry,cr,sum;
    while(scanf("%llu %llu",&a,&b)==2)
    {
        if(a==0 && b==0)
            break;


        carry=0;
        cr=0;

        while(a>0 || b>0)
        {
            carry=((a%10)+(b%10))/10;

            a/=10;
            b/=10;

            if(carry)
                cr++;
        }

        cout<<cr<<endl;


    }
}
