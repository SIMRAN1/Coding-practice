class Solution {
public:
    int maxDepth(string s) {
        int count=0;
        int maxi=INT_MIN;
        for(int i=0;i<s.length();i++) {
            if(s[i]=='(') {
                count++;
            } else if(s[i]==')') {
                count--;
            } else if(isdigit(s[i])){
                maxi=max(maxi,count);
            }
        }
        return maxi;
    }
};
