class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       vector<int>result;
        if(target%2==0){
            auto it=find(nums.begin(),nums.end(),target/2);
            if(it!=nums.end()){
                auto ti=find(it+1,nums.end(),target/2);
                if(ti!=nums.end()){
                    result.push_back(it-nums.begin());
                    result.push_back(ti-nums.begin());
                    return result;
                }
            }

        }
        map<pair<int,int>,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[{nums[i],target-nums[i]}]=i;
        }
        for(const auto &[i,j]:mp){
            if(mp.count({i.second,i.first})&&mp[{i.second,i.first}]!=j){
                    result.push_back(mp[{i.first,i.second}]);
                    result.push_back(mp[{i.second,i.first}]);
                    sort(result.begin(),result.end());
                    break;
            }
        }
        return result;
    }
};
