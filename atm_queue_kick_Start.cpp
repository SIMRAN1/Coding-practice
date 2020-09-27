#include<bits/stdc++.h>
#define ll long long int
using namespace std;
bool static compare(pair<int,int> a,pair<int,int> b) {
    if(a.first==b.first) {
        return a.second<b.second;
    }
    return a.first<b.first;
}
int main() {
    int t;
    cin>>t;
    int c=0;
    while(t-->0) {
        ll n,x;
        cin>>n>>x;
        vector<pair<ll,ll>> a(n,{-1,-1});
        ll t1;
        //queue<pair<int,int>> q;
        for(int i=0;i<n;i++) {
            cin>>t1;
            ll time1=t1/x;
            if(t1%x==0) {
                time1--;
            }
            a[i]= {time1,i+1};
           // q.push({i+1,a[i]});
        }
        
        // for(auto i:a) {
        //     cout<<i.first<<" "<<i.second<<" ";
        // }
        
        sort(a.begin(),a.end(),compare);
        c++;
        cout<<"Case #"<<c<<": ";
        for(auto i:a) {
           cout<<i.second<<" "; 
        }
        cout<<"\n";
    }
    return 0;
}
