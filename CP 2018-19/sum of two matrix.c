#include<stdio.h>
int main()
{
    int i,j,sum=0,r,c;
    int a[10][10],b[10][10],d[10][10];
    printf("Enter the row and column number: ");
    scanf("%d%d",&r,&c);
    printf("Enter the first matrix:\n");
    for(i=0;i<r;i++)
    {
    for(j=0;j<c;j++)
    {
        scanf("%d",&a[i][j]);
    }
    //printf("\n");
    }
      printf("\n");
      printf("Enter the second matrix:\n");

    for(i=0;i<r;i++)
    {
    for(j=0;j<c;j++)
    {
        scanf("%d",&b[i][j]);
    }
     //printf("\n");
    }

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            d[i][j]=a[i][j]+b[i][j];
            //sum=sum+ara[i][j];
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            sum=sum+d[i][j];
        }
    }
    printf("\nThe sum of two matrix: %d",sum);
    return 0;
}


