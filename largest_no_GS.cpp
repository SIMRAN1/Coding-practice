class Solution {
public:
    bool static compare(string s1,string s2) {
        string a=s1+s2;
        string b=s2+s1;
        return a>b;
    }
    string largestNumber(vector<int>& nums) {
        vector<string> num;
        for(auto i:nums) {
            num.push_back(to_string(i));
        }
        int flag=0;
        sort(num.begin(),num.end(),compare);
        string res;
        for(auto i:num) {
            res+=i;
            if(i!="0") {
                flag=1;
            }
        }
        if(flag==0) {
            return "0";
        }
        if(res[0]=='0'&&res.length()>1) {
            res = res.substr(1,res.length());
        }
        return res;
    }
};
