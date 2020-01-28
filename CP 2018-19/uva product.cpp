#include<bits/stdc++.h>
using namespace std;
int result[500];
int main()
{
    char a[500],b[500];
    while(scanf("%s%s",&a,&b)==2)
    {
    if(strcmp(a,"0")==0 || strcmp(b,"0")==0)
    {
        printf("0\n");
        break;
    }
    int len,len2,i,ac,temp,l,carry=0,k,m;
    len=strlen(a);
    len2=strlen(b);
    l=((len+len2)-2);
    k=l;
    m=k;
    cout<<len<<" "<<len2<<" "<<m<<" "<<l<<endl;

    for(int i=len;i>=0;i--)
    {
        carry=0;
        for(int j=len2;j>=0;j--)
        {
            temp=((b[j]-'0')*(a[i]-'0'))+carry+result[l];
            cout<<temp<<endl;
            result[l]=temp%10;
            carry=temp/10;
            l--;
        }
        if(carry>0)
        {
            result[]
        }

      l=k-1;
      k--;
    }

    for(i=0;i<m;i++)
    {
        cout<<result[i];
    }
    cout<<result[m]<<endl;


  }

}
