#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long t,n,ar[10000];
	long long x=0,y=0;

	cin>>t;
	while(t--)
	{
	  cin>>n;
	  string a;
	  cin>>a;
	  long long l,i,r,u,d,posl,posr,posu,posd;
	  l=0;
	  r=0;
	  u=0;
	  d=0;
	  posl=0;
	  posr=0;
	  posd=0;
	  posu=0;
	  for(i=0;i<n;i++)
	  {
	  	if(a[i]=='L'){
	  		l++;
            x--;
           
	  	}
	  	else if(a[i]=='R'){
	  		r++;
	  		x++;
	  		
	  	}
	  	else if(a[i]=='U'){
	  		u++;
	  		y++;
	  		
	  	}
	  	else if(a[i]=='D'){
	  		d++;
	  		y--;
	  		
	  	}
	  }
	  long long xx=0;
	  long long yy=0;
	  long long cnt=0;
	  if((l>0 && r>0)||(d>0 && u>0))
	  {
	  	cnt=1;
	  	for(i=0;i<n;i++)
	    {
	    	
	    	
	    if(a[i]=='L'){
	  		xx--;
	  		if(a[i+1]=='R'){
               
           posl=i+1;
           posr=i+2;
        }

            
	  	}
	  	else if(a[i]=='R'){
	  		xx++;
	  		if(a[i+1]=='L'){
	  		
	  		posl=i+1;
	  		posr=i+2;
	  	}
	  		
	  	}
	  	else if(a[i]=='U'){
	  		yy++;
	  		if(a[i+1]=='D'){
	  		
	  		posu=i+1;
	  		posd=i+2;
	  	}
	  		
	  	}
	  	else if(a[i]=='D'){
	  		yy--;
	  		if(a[i+1]=='U'){
	  		 
	  		 posu=i+1;
	  		 posd=i+2;
	  		}
	  				
	  	}


	    	}

	  	
	    }

 if(posl==0 && posu==0 && cnt==1)
 {
 	if(l>0 && r>0 && u>0 && d>0)
 	{
 		if(l==r && u==d)
 			cout<<"1 "<<n<<endl;
 		else
 			cout<<"1 "<<n-1<<endl;
 	}
 }
 

 else
   {
	if(posl>0 && posr>0)
	{
		cout<<posl<<" "<<posr<<endl;
	}
	else if(posu>0 && posd>0)
		cout<<posu<<" "<<posd<<endl;
	else
		cout<<"1 "<<n<<endl;

  }
	  		

	  }
	 

	
}

