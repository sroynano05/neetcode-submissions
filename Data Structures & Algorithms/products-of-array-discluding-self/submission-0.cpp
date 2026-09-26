class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>s,p;
        s.push_back(1);
        p.push_back(1);
        int mul=1;
        for(int i=1;i<nums.size();i++){
            p.push_back(mul*nums[i-1]);
            mul*=nums[i-1];
        }
        int mul2=1;
        for(int i=nums.size()-2;i>=0;i--){
            s.push_back(mul2*nums[i+1]);
            mul2*=nums[i+1];
        }
        vector<int>v;
        for(int i=0;i<nums.size();i++){
            v.push_back(p[i]*s[nums.size()-i-1]);
        }
        return v;
    }
};
