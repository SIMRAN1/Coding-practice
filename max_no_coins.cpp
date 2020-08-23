class Solution {
public:
    int maxCoins(vector<int>& piles) {
        int n=piles.size();
        int req=n/3;
        sort(piles.begin(),piles.end(),greater<int>());
        int c=0;
        int max=0;
        int k=1;
        while(c<req) {
            max+=piles[k];
            k+=2;
            c++;
        }
        return max;
    }
};
