#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100],str2[100];
    int len,i,j;
    gets(str1);
    len=strlen(str1);
    j=len-1;
    for(i=0;i<len;i++,j--)
    {
        str2[i]=str1[j];
    }
    puts(str2);
}
