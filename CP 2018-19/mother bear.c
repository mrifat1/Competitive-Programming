#include<stdio.h>
#include<string.h>
int main()
{
    char str1[500],str2[500];
    int i,j,b;
    while(1)
    {
        gets(str1);
        b=strcmp("DONE",str1);
        if(b==0)
            break;
        i=0,j=0;
        for(i=0;str1[i] != '\0';i++)
        {
            if((str1[i]>='a'&& str1[i]<='z'))
            {
                str1[j]=str1[i];
                j++;
            }
            else if((str1[i]>='A'&& str1[i]<='Z'))
            {
                str1[j]=str1[i]+32;
                j++;

            }

        }

        str1[j] = '\0';
        j=j-1;
        for(i=0;str1[i] != '\0';i++)
        {
            str2[i]=str1[j];
            j--;
        }
        str2[i] = '\0';
        b=strcmp(str1,str2);
        if(b==0)
              printf("You won't be eaten!\n");
        else
		     printf("Uh oh..\n");
    }
    return 0;
}
