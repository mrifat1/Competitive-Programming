#include <bits/stdc++.h>
#include<math.h>

//#define PI 3.1415
using namespace std;
int main()
{
    double a,b,c,t,r,R,rose,sun,s,violet,PI=3.141592653589793;


    while(scanf("%lf%lf%lf",&a,&b,&c)==3)
    {
        s=(a+b+c)/2;
        t= sqrt(s*(s-a)*(s-b)*(s-c));
        r=(t)/(s);
        rose= (PI) *(r*r);
        violet=(t-rose);
        R=((a*b*c)/(4*t));
        sun= (PI) *(R*R);
        printf("%.4lf %.4lf %.4lf\n",(sun-(violet+rose)),violet,rose);

    }

return 0;
}

