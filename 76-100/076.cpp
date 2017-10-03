#include <cmath>
#include <cstring>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
const int mod=1000000007;
long long int dp[1008][1008];
long long int calc(long long int n,long long int k)
    {
    if(n==0) 
        return 1;
    if(k==0)
        return 0;
    if(dp[n][k]!=-1)
        return dp[n][k];
    
    long long int res=0;
    res=(res+calc(n,k-1))%mod;
    if(n>=k)
        res=(res+calc((n-k),k))%mod;
    return dp[n][k]=res;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    memset(dp,-1,sizeof(dp));
    while(t--)
        {
        long long int n;
        cin>>n;
        cout<<calc(n,n-1)<<endl;
    }
    return 0;
}
