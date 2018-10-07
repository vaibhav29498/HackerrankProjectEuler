#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int> a,pair<int,int> b){
    return (a.second*log(a.first))<(b.second*log(b.first));}
int main() {
int n;cin>>n;
    vector <pair<int,int> > v;
    for(int i=0;i<n;i++)
        {
        int a,b;cin>>a>>b;
        v.push_back(make_pair(a,b));
        
    }
    sort(v.begin(),v.end(),cmp);
    int k;cin>>k;
    cout<<v[k-1].first<<" "<<v[k-1].second;
    
    return 0;
}
