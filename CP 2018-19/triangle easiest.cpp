#include<stdio.h>
int main()
{
    long long int a,b,c,d;
    int i;
    scanf("%lld",&d);
    for(i=1;i<=d;i++)
    {
      scanf("%lld%lld%lld",&a,&b,&c);
        if(a>=b+c || b>=a+c || c>=a+b)
            printf("Case %d: Invalid\n",i);
         else if(a==b && b==c)
             printf("Case %d: Equilateral\n",i);
        else if(a==b || a==c)
                printf("Case %d: Isosceles\n",i);
          else
               printf("Case %d: Scalene\n",i);
    }
    return 0;
}
