class Solution {
public:
    bool isPalindrome(string s) {
        string str="";
         transform(s.begin(),s.end(),s.begin(),[](unsigned char c){return tolower(c);});
        for(int i=0;i<s.length();i++){
            if(s[i]!=' '&&(((s[i]-'a')>=0&&(s[i]-'a')<=26)||(s[i]-'0')>=0&&(s[i]-'0')<=9)) str+=s[i];
        }
        transform(str.begin(),str.end(),str.begin(),[](unsigned char c){return tolower(c);});
        for(int i=0,j=str.length()-1;i<j;i++,j--){
            if(str[i]!=str[j]) {
                return false;
            }
        }
        return true;
    }
};
