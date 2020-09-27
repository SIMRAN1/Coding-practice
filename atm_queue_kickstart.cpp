#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    int c=0;
    while(t-->0) {
        int n,x;
        cin>>n>>x;
        int a[n];
        queue<pair<int,int>> q;
        for(int i=0;i<n;i++) {
            cin>>a[i];
            q.push({i+1,a[i]});
        }
        vector<int> res;
        while(!q.empty()) {
            pair<int,int> front = q.front();
            if(front.second<=x) {
                res.push_back(front.first);
                q.pop();
            } else {
                pair<int,int> update = {front.first,front.second-x};
                q.pop();
                q.push(update);
            }
        }
        c++;
        cout<<"Case #"<<c<<": ";
        for(auto i:res) {
           cout<<i<<" "; 
        }
        cout<<"\n";
    }
    return 0;
}
