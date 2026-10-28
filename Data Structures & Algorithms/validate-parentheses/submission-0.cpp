class Solution {
public:
    bool isValid(string s) {
        stack<char>se;
        map<char,char>mp;
        mp['{']='}';
        mp['[']=']';
        mp['(']=')';
        for(int i=0;i<s.length();i++){
            se.push(s[i]);
            if(se.size()>=2){
                char it=se.top();
                se.pop();
                char ti=se.top();
                se.push(it);
                if(mp[ti]==it){
                    se.pop();
                    se.pop();
                }
            }
        }
        return se.empty();

    }
};
