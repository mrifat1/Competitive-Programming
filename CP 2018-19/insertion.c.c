#include <stdio.h>

int main()
{
    int a[100],b[100],t,i,j;

    printf("Enter index array : ");
    scanf("%d",&t);

    printf("First Array : ");
    for(i=0;i<t;i++)
        scanf("%d",&a[i]);

    printf("2nd Array : ");
    for(i=0;i<t;i++)
        scanf("%d",&b[i]);

    printf("Insertion of this two array : ");
    for(i=0;i<t;i++)
    {
        for(j=0;j<t;j++)
        {
            if(a[i]==b[j])
                {
                    printf("%d ",a[i]);
                    break;
                }
        }
    }
    printf("\n");
    return 0;
}
