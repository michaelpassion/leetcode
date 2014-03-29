class Solution {
public:
    void reverseWords(string &s) {
        string str;
        for(int i=s.length()-1; i>=0;) {
            while(s[i]== ' ' && i>=0) i--;
            if(i<0) break;
            string tmp;
            while(s[i] != ' ' && i>=0) {
                tmp.push_back(s[i]);
                i--;
            }
            if(tmp.length() > 1)
            reverse(tmp.begin(),tmp.end());
            if(!str.empty())
                str+=' ';
            str.append(tmp);
        }
        
        s=str;
    }
};
