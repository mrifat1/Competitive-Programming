#include<stdio.h>
#include<math.h>
int main()
{
    long int a,f,t,i;
    double b;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&f);

        b=sqrt(f);
        a=b;
        if(a!=b)
            printf("%0.6lf\n",b);
        else
            printf("%ld\n",a);
    }
    return 0;

}
