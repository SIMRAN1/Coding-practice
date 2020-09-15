class Solution {
public:
    string trimString(std::string& str)
{
    str.erase(0, str.find_first_not_of(' '));       //prefixing spaces
    str.erase(str.find_last_not_of(' ')+1);         //surfixing spaces
    return str;
}
    int lengthOfLastWord(string s) {
        trimString(s);
        if(s.length()==0) {
            return 0;
        }
        int pos=-1;
        for(int i=s.length()-1;i>=0;i--) {
            if(s[i]==' ') {
                pos=i;
                break;
            }
        }
        //int n=s.length()-1;
        if(pos==-1) {
            return s.length();
        } else {
            return s.length()-pos-1;
        }
    }
};
