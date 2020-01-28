#include<stdio.h>
#include<string.h>
int main()
{
    char str1[200],str2[100];
    int i=0,j=0;
    gets(str1);
    gets(str2);
   strcat(str1,str2);
   puts(str1);
       return 0;
}

