class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string lcp = "";
        string l = strs[0];
        for (string str : strs){
            if (str.size() < l.size()){
                l = str;
            }
        }
    
        for (int i=0; i<l.size(); i++){
            bool ttt = true;    
            for (string str : strs){
                if (l[i] != str[i]){
                    return lcp;
                }
            }

            if (ttt){
                lcp+=l[i];
            }
        }

        return lcp;
    
    }
};