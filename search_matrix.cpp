class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        vector<int>::iterator low1;
        for(int i=0;i<matrix.size();i++) {
            low1 = lower_bound(matrix[i].begin(),matrix[i].end(),target);
            if(low1-matrix[i].begin()>=0 && low1-matrix[i].begin()<matrix[i].size()) {
            if(target==matrix[i][low1-matrix[i].begin()]) {
                return true;
            }
            }
        }
        return false;
        
    }
};
