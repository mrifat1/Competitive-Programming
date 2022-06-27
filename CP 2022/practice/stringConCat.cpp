#include<bits/stdc++.h>
using namespace std;
string StringChallenge(int num){
    string numtoHour = "";

    numtoHour += to_string(num/60);
    // cout<<"first "<<numtoHour<<endl;
    numtoHour += ":";
    // cout<<"second "<<numtoHour<<endl;

    numtoHour += to_string(num%60);

    return numtoHour;
}
int main()
{
    int n;
    string accessToken;
    string numtoHour = "";
    cin>>accessToken;
    cin>>n;
    
    numtoHour = StringChallenge(n);
    numtoHour += accessToken;
    // cout<<numtoHour.size()<<endl;
    for(int i = 2; i < numtoHour.size();i+=3)
    {
        numtoHour.replace(i,1,"X");
    }
    cout<<numtoHour<<endl;


}