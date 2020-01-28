#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s[205],str[205];
    int i,l,j=0;
    cin>>s;
    l=strlen(s);
    for(i=0;;){
        if(s[i]=='W'&& s[i+1]=='U'&& s[i+2]=='B'){
            str[j]=' ';
            j++;
            i+=3;

        }
        else{
            str[j]=s[i];
            j++;
            i++;
        }
        if(str[j-2]==' '&&str[j-1]==' '){
          j--;
        }

        if(i>l)
            break;

    }
    if(str[0]==' '){
            l=strlen(str);
            for(i=1;i<=l;i++){
        str[i-1]=str[i];
    }
    }


    printf("%s\n",str);
    return 0;
}
