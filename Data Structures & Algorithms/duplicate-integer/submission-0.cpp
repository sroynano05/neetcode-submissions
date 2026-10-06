class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        bool change =false;
        for(auto &[i,x]:mp){
            if(x>1) {
                return true;
                change =true;
                break;
            }
        }
        if(!change) return false;
    }
};