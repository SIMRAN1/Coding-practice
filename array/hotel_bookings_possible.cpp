bool Solution::hotel(vector<int> &arrive, vector<int> &depart, int K) {
    vector<pair<int,int>>v;int l=arrive.size();int count=0;
    for(int i=0;i<l;i++)
    {
     pair<int,int> p1=make_pair(depart[i],0);
     pair<int,int> p2=make_pair(arrive[i],1);
     v.push_back(p1);
     v.push_back(p2);
    }
    
    sort(v.begin(),v.end());
    
    for(pair<int,int> p:v)
    {
        if(p.second==1)
        count++;
        else
        count--;
        
        if(count>K)
        return false;
    }
    
    return true;
}
