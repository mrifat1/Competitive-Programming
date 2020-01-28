#include<stdio.h>
int main()
{
    char str1[1000],temp;
    int i=0,j=0;
    gets(str1);
    //j=strlen(str1)-1;
    while(str1[i]!='\0')
    {
        j++;
        i++;
    }
    j=j-1;
    i=0;
    while(i<j)
    {
        temp=str1[j];
        str1[j]=str1[i];
        str1[i]=temp;
        i++;
        j--;
    }
    puts(str1);

    return 0;

}
