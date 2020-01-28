#include<stdio.h>
#include<math.h>
int main()
{
    float a,b;

    scanf("%f",&a);


    if(a>=0 || a==400)
    {
        b= a* (15/100);

        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 15 %%\n",a+b,b);
    }
    else if(a>=400.01 || a==800.00)
    {

        b= a*(12/100);

        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 12 %%\n",a+b,b);
    }
    else if(a>=800.01 || a==1200.00)
    {

        b= a*(10/100);

        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 10 %%\n",a+b,b);
    }
    else if(a>=1200.01 || a==2000.00)
    {

        b= a*(7/100);

        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 7 %%\n",a+b,b);
    }
    else
    {

        b= a*(4/100);

        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 4 %%\n",a+b,b);
    }

return 0;
}
