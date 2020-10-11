class Solution {
public:
    int maximalNetworkRank(int n, vector<vector<int>>& roads) {
        vector<vector<int>> connected(n,vector<int> (n,0));
        vector<int> count(n,0);
        for(int i=0;i<roads.size();i++) {
            count[roads[i][0]]++;
            count[roads[i][1]]++;
            connected[roads[i][0]][roads[i][1]] = true;
            connected[roads[i][1]][roads[i][0]] = true;
        }
        int maxRank = 0;
        for(int i=0;i<n;i++) {
            for(int j=i+1;j<n;j++) {
                maxRank = max(maxRank, count[i]+count[j]- (connected[i][j] ? 1 : 0));
            }
        }
        return maxRank;
    }
};
