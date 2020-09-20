bool compare(pair<int,int> A, pair<int,int> B) {
        return A.second<B.second;
}

int Solution::solve(vector<vector<int> > &A) {
    vector<pair<int,int>> mp;
    for(int i=0;i<A.size();i++) {
        mp.push_back({A[i][0],A[i][1]});
    }
    sort(mp.begin(),mp.end(),compare);
    int count=1;
    int endTime = mp[0].second;
    for(int i=1;i<mp.size();i++) {
        if(mp[i].first>endTime) {
            count++;
            endTime = mp[i].second;
        }
    }
    return count;
}
