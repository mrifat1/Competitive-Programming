#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    for(int i = 200; i >= 3;)
    {
        if(i%3 == 0)
    {
        cout<<i<<endl;
        i=i-3;
    }
    else
    {
        i--;
    }
    }


}
