#include<iostream>
using namespace std;
int main()
{
    int i,t,c=0,d=0,e=0,a[101],b[101];

    for(i=0;i<3;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<3;i++)
    {
        cin>>b[i];
    }
    c=0;
    d=0;
    e=0;
    for(i=0;i<3;i++)
    {
        if(a[i]>b[i])
           d++;
        else if(a[i]<b[i])
            e++;
        else
         c++;
    }
    cout<<d <<" "<<e<< endl;
}
