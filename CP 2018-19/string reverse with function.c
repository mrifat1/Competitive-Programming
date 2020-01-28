#include<stdio.h>
void reverse(char str1[1000]);
int main()
{
    char str1[1000];
    reverse(str1);
    puts(str1);

}
void reverse(char str1[1000])
{
    char temp;
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
}
