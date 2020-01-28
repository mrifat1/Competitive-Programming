#include<stdio.h>
int main()
{
    int i,j,sum=0;
    int ara[3][3];
    printf("Enter the matrix number:\n");
    for(i=0;i<3;i++)
    {
    for(j=0;j<3;j++)
    {
        scanf("%d",&ara[i][j]);
    }
    }
    printf("sum of matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            sum=sum+ara[i][j];
        }
    }
    printf("%d\n",sum);

    return 0;
}

