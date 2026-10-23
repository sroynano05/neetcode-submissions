class Solution {
    // maps contains the keys even if values come to zero
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size()) return false;
        else{
            vector<int>mp(26,0);
            for(int i=0;i<s1.size();i++){
                mp[s1[i]-'a']++;
            }
            vector<int>m(26,0);
            for(int i=0;i<s1.size();i++){
                m[s2[i]-'a']++;
            }
            if(mp==m) return true;
            for(int i=s1.size();i<s2.size();i++){
                m[s2[i]-'a']++;
                m[s2[i-s1.size()]-'a']--;
                if(mp==m) return true;
            }
        }
        return false;
    }
};
