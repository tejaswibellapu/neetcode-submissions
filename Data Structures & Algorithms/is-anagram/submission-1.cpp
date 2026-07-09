class Solution {
public:
    bool isAnagram(string s, string t) {
        int counts[256]={0};
        if(s.length()!=t.length()) return false;
        for(int i=0;i<s.length();i++){
            counts[s[i]]++;
            counts[t[i]]--;
        }
        for(int c:counts){
            if(c!=0) return false;
        }
        return true;
    }
};
