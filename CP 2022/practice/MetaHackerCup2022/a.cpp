#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,t,preCo[110];
    FILE *fptr,*fptr2;
    int caseee = 0;
    fptr = fopen("input.txt","r");
    fptr2 = fopen("output.txt","w");
    fscanf(fptr,"%d",&t);
    // cout<<t<<endl;
    // fclose(fptr);
    // cin>>t;
    while(t--)
    {
        // cin>>n>>k;
        fscanf(fptr,"%d %d",&n,&k);
        // cout<<n<<" "<<k<<endl;
        // fclose(fptr);
        int ar[n],res,tes;
        int check = true;
        memset(preCo,0,sizeof(preCo));
        for (int i = 0; i < n; i++)
        {
            // cin>>ar[i];
            fscanf(fptr,"%d",&ar[i]);
            // ar[i]=tes;
            // cout<<ar[i]<<"h"<<endl;
            preCo[ar[i]]++;
            if(preCo[ar[i]]>2)
            {
                check = false;
            }
        }
        if(!check)
        {
            // printf("Case #%d: NO\n",++caseee);
            fprintf(fptr2,"Case #%d: NO\n",++caseee);

        }
        else{
            res = n/2;
                
        if(n%2){
            if(res+1>k){
                // printf("Case #%d: NO\n",++caseee);
                fprintf(fptr2,"Case #%d: NO\n",++caseee);
            }

            else{
                // printf("Case #%d: YES\n",++caseee);
                fprintf(fptr2,"Case #%d: YES\n",++caseee);
            }
        }
        else{
             if(res>k){
                // printf("Case #%d: NO\n",++caseee);
                fprintf(fptr2,"Case #%d: NO\n",++caseee);
             }

            else{
                // printf("Case #%d: YES\n",++caseee);
                fprintf(fptr2,"Case #%d: YES\n",++caseee);
            }
        }

            

        }
        
    }
    // fclose(fptr);

}