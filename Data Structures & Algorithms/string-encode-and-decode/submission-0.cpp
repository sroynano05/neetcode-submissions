class Solution {
public:
    map<int,string>mp;
    string encode(vector<string>& strs) {
        for(int i=0;i<strs.size();i++){
            mp[i]=strs[i];
        }
        string s="";
        for(const auto &[i,j]:mp){
            s=s+j;
        }
        return s;
    }

    vector<string> decode(string s) {
        vector<string>v;
        for(const auto &[i,j]:mp){
                v.push_back(j);
        }
        return v;
    }
};
