class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        vector<pair<int,int>>v;
        for(auto &[c,i]:mp){
            v.push_back({i,c});
        }
        sort(v.begin(),v.end());
        vector<int>ans;
        int j=v.size()-1;
        while(k--){
            ans.push_back(v[j].second);
            j--;
        }
        return ans;
    }
};
