class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        if(intervals.size()==0) {
            intervals.push_back(newInterval);
            return intervals;
        }
        int pos=-1;
        for(int i=0;i<intervals.size();i++) {
                 if(intervals[i][0]>newInterval[0]) {
                     pos=i;
                     break;
                 }
        }
        if(pos==-1) {
            intervals.push_back(newInterval);
        } else {
       intervals.insert(intervals.begin()+pos,newInterval);
        }
        
        vector<vector<int>> intervals1;
        int i=0;
        int n=intervals.size();
        while(i<intervals.size()-1) {
            if(i<pos-2) {
                intervals1.push_back({intervals[i][0],intervals[i][1]});
                i++;
            } else {
                if(intervals[i][1]>=intervals[i+1][0]) {
                    cout<<intervals[i][0];
                    intervals[i+1][0]=intervals[i][0];
                    intervals[i+1][1]=max(intervals[i][1],intervals[i+1][1]);
                    i++;
                }  else {
                   intervals1.push_back({intervals[i][0],intervals[i][1]});
                    i++;
                }
            }
        }
        intervals1.push_back(intervals[i]);
        return intervals1;
    }
};
