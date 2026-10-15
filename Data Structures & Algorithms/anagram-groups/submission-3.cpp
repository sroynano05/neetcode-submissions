class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>v;
        vector<pair<map<char,int>,string>>m;
        for(int i=0;i<strs.size();i++){
            map<char,int>mp;
            for(int j=0;j<strs[i].length();j++){
                mp[strs[i][j]]++;
            }
            m.push_back({mp,strs[i]});
        }
        sort(m.begin(),m.end());
        vector<string>vi;
        if(m.size()==1) {
            vi.push_back(m[0].second);
            v.push_back(vi);
            return v;
        }
        for(int i=0;i<m.size()-1;i++){ 
            if(m[i].first!=m[i+1].first){
             vi.push_back(m[i].second);
             if(i==m.size()-2) {
                v.push_back(vi);
                vi.clear();
                vi.push_back(m[i+1].second);  
            } 
                v.push_back(vi);
                vi.clear();
            }
            else {
                vi.push_back(m[i].second);
                if(i==m.size()-2) {vi.push_back(m[i+1].second);
                v.push_back(vi);
                }
            }
        }
        return v;
    }
};
