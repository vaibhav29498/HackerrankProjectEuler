#include <bits/stdc++.h>
using namespace std;

int dp[200000];

int main() {
    int a[10000];
    int t;
    cin>>t;
    while(t--)
        {
        int n,c,m,i,j,n1,x,ans;
        cin>>n;
        m=0;
        for(i=2;i<n;++i)
            {
            if(dp[i]==0)
                {
            for(j=0;j<10000;++j)
                a[j]=0;
            c=0;
            n1=10*(i/10+1);
            x=0;
            while(n1)
                {
                if(n1%i==0)
                    {
                    break;
                }
                else if(a[n1%i]==0)
                    {
                    a[n1%i]=x;
                    n1=(n1%i);
                    while(n1<i)
                        n1*=10;
                }
                else
                    {
                    c=x-a[n1%i];
                    break;
                }
                x++;
            }
            dp[i]=c;
            }
            if(m<dp[i])
                {
                m=dp[i];
                ans=i;}
        }
        cout<<ans<<endl;
    }
    return 0;
}
