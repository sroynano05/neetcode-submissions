class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int>ms,mt;
        for(int i=0;i<s.size();i++){
            ms[s[i]]++;
        }
        for(int i=0;i<t.size();i++){
            mt[t[i]]++;
        }
        if(s.size()>=t.size()){
            for(auto &[c,i]:ms){
            if(mt[c]!=i)  return false;
        }
        }
        else{
            for(auto &[c,i]:mt){
            if(ms[c]!=i)  return false;
        }
        }
        return true;
    }
};
