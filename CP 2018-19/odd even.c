#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main()
{
    int T;
    cin>>T;

    for(int j=0; j<T; j++)
    {
        int m, nx;
        cin>>m>>nx;
        int finalCount = 0;

        for(int kk=m; kk<nx; kk++) // number
        {
            // Note that this loop runs till square root
            int oddCounter = 0;
            for (int i=1; i<=sqrt(kk); i++)
            {
                if (kk%i == 0)
                {
                    // If divisors are equal, print only one
                    if (kk/i == i)
                    {
                        if (kk & 1)
                            oddCounter++;
                    }
                    else // Otherwise print both
                    {
                        if (i & 1)
                            oddCounter++;
                        if ((kk/i) & 1)
                            oddCounter++;

                    }
                }
            }

            if ( oddCounter& 1)
                finalCount++;
        }

        cout<<"Case "<<j+1<<": "<<finalCount<<"\n";

    }

    //auto var_name = 0;
    //cout<<var_name<<"\n";

}
