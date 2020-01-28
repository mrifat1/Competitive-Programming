#include<stdio.h>
#define PI acos(-1.0)
int main()
{
    int t,l;
    double redarea,arearec,areagreen,w,r,area;

    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&l);
        w=l*(6/10);
        r=l*(2/10);
        area=l*w;
        redarea=PI*r*r;
        areagreen=area-redarea;
        printf("%.2lf %.2lf\n",redarea,areagreen);
    }
    return 0;
}
