class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int> v;
        int x=0;
        for(int i=0;i<arr.size();i++) {
            x=x^arr[i];
            v.push_back(x);
        }
        vector<int> res;
        for(int i=0;i<queries.size();i++) {
            if(queries[i][0]==0) {
                res.push_back(v[queries[i][1]]);
            } else {
            res.push_back(v[queries[i][0]-1]^v[queries[i][1]]);
            }
        }
        return res;
    }
};
