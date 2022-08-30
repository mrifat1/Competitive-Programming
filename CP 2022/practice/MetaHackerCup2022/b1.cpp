#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    FILE *fptr,*fptr2;
    
    fptr = fopen("inputb1.txt","r");
    fptr2 = fopen("outputb1.txt","w");
    fscanf(fptr,"%d",&t);
    int caseee = 0;
    while(t--)
    {
        char v[105][105];
        int a,b;
        // cin>>a>>b;
        char ch[105];
        fscanf(fptr,"%d %d",&a,&b);
        // cout<<a<<" "<<b<<endl;
        for(int i = 0; i < a; i++)
        {
          
            fscanf(fptr,"%s",v[i]);
            // v[i][j] = ch;
            // cout<<v[i];
        }
            // cin>>v[i][j];
            
        
        bool check = false;
        if(a==1 || b==1)
        {   
          for(int i = 0; i < a; i++)
            {
            for (int j = 0; j < b; j++)
              {
                if(v[i][j]== '^')
                {
                    check = true;
                }
              }
            }
            if(check)
            {
                fprintf(fptr2,"Case #%d: Impossible\n",++caseee);
            }
            else{
                fprintf(fptr2,"Case #%d: Possible\n",++caseee);
            for(int i = 0; i < a; i++)
            {
             for (int j = 0; j < b; j++)
             {
                // cout<<".";
                fprintf(fptr2,".");
             }
             fprintf(fptr2,"\n");
            }
            }
        }
        else{
            fprintf(fptr2,"Case #%d: Possible\n",++caseee);
            for(int i = 0; i < a; i++)
            {
             for (int j = 0; j < b; j++)
             {
                fprintf(fptr2,"^");
             }
             fprintf(fptr2,"\n");
            }

        }
    }
    // fclose(fptr);
    // fclose(fptr2);

}