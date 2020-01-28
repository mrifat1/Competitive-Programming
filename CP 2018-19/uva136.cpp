#include<bits/stdc++.h>
using namespace std;
int uglycheck(long long d)
{
	while(d%2==0)
		d/=2;

	while(d%3==0)
		d/=3;

	while(d%5==0)
		d/=5;

	if(d==1)
		return 1;
	else
		return 0;

}
int main()
{
	/*long long i,cnt=0;
	for(i=1;;i++)
	{
		if(uglycheck(i))
			cnt++;
		if(cnt==1500){
			cout<<"The 1500'th ugly number is "<<i<<"."<<endl;
			break;
		}

	}*/
	 printf("The 1500'th ugly number is 859963392.\n");
}
