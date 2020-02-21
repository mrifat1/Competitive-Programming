#include <bits/stdc++.h>
using namespace std;

int main(){

    char ar[7] = {'R','O','Y','G','B','I','V'};
    int n; 
    scanf("%d", &n);
    for(int k = 0; k < 3; k++)
    		printf("%c", ar[k]);
    	
    for(int k = 3; k < n; k++)
    	printf("%c", ar[3+k%4]);
    
    
    return 0;
}