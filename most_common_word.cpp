class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        string word;
        map<string,int> mp;
        for (auto & c: paragraph) c = isalpha(c) ? tolower(c) : ' ';
        for(int i=0;i<paragraph.length();i++) {
            if(paragraph[i]!=' ') {
                 word += tolower(paragraph[i]);
            } else {
              // cout<<word<<" ";
                if(word!=" "||word!="") {
               mp[word]+=1;
                }
                word="";
            }
        }
        if(word!=" "||word!="") {
        mp[word]++;
        }
        mp[" "]=0;
        mp[""]=0;
        int min=0;
        int flag=0;
        string res="";
        for(auto i:mp) {
            cout<<i.first<<" "<<i.second<<" ";
            flag=0;
            if(i.second>min) {
                for(int j=0;j<banned.size();j++) {
                    if(i.first == banned[j]) {
                        flag=1;
                        break;
                    }
                }
                if(flag==0) {
                    res=i.first;
                    min=i.second;
                  //  cout<<res<<" "<<min<<" ";
                }
            }
        }
        return res;
    }
};
