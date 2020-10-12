class Solution {
public:
    bool buddyStrings(string A, string B) {
        if(A.length()!=B.length()) {
            return false;
        }
        int count = 0;
        vector<int> pos1(3,0);
        int flag = 0;
        
         // Repeat: same string, A needs repeated char, like "aab" "aab"
        int numChar_A = unordered_set<char>(A.begin(), A.end()).size();
        if (A == B && numChar_A < B.length()) return true;
            else if(A==B) {
                return false;
            } 
        
        for(int i=0;i<A.length();i++) {
            if(count < 2) {
                if(A[i]!=B[i]) {
                    pos1[count] = i;
                    count++;
                }
             } else {
                flag = 1;
            }
        }
        if(flag == 1) {
            return false;
        } 
        if(B[pos1[0]] == A[pos1[1]] && A[pos1[0]] == B[pos1[1]] ) {
            return true;
        } 
        return false;
    }
};
