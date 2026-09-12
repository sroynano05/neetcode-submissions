class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        set<int>st(nums.begin(),nums.end());
        int c=1,mx=0;
        auto it=st.begin();
        auto it1=next(it);
        for(;it1!=st.end();it++,it1++){
            if(*it==*(it1)-1){
                    ++c;
            }
            else{
                mx=max(c,mx);
                c=1;
            }
        }
        mx=max(c,mx);
        return mx;

    }
};
