class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length()==1) return 1;
        map<char,int>mp;
        int mx=0;
        int j=0;
        int i=0;
        while(i>=j&&i<s.length()){
            if(mp[s[i]]<1){
                mp[s[i]]++;
                i++;
            }
            else{
                mx=max(mx,i-j);
                mp[s[j]]--;
                j++;
            }
        }
        mx=max(mx,i-j);
        return mx;
    }
};
