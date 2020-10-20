class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        map<char,int> mp;
        map<char,vector<int>> mp1;
        for(int i=0;i<s.length();i++) {
            mp[s[i]]++;
            mp1[s[i]].push_back(i);
        }
  
        int maxi=INT_MIN;
        int flag=0;
        for(auto i:mp) {
            if(i.second>=2) {
                flag=1;
                vector<int> v = mp1[i.first];

                int val = v[v.size()-1]-v[0];
                maxi=max(val,maxi);
            }
        }
        if(flag==0) {
            return -1;
        }
       return maxi-1; 
    }
};
