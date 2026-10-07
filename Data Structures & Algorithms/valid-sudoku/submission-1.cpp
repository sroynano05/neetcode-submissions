class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        bool change=false;
        for(int i=0;i<9;i++){
            map<char,int>mp;
            for(int j=0;j<9;j++){
                if(board[i][j]!='.'){
                    mp[board[i][j]]++;
                    if(mp[board[i][j]]>1){
                        return false;
                        // change =true;
                    }
                }
            }
        }
        change=false;
        for(int i=0;i<9;i++){
            map<char,int>mp;
            for(int j=0;j<9;j++){
                if(board[j][i]!='.'){
                    mp[board[j][i]]++;
                    if(mp[board[j][i]]>1){
                        return false;
                        // change =true;
                    }
                }
            }
        }
        change =false;
        map<char,int>mp;
        for(int i=0;i<9;i++){
            for(int j=0;j<3;j++){
                if(board[j][i]!='.'){
                    mp[board[j][i]]++;
                    if(mp[board[j][i]]>1){
                        return false;
                        // change =true;
                    }
                }
            }
            if(i==2||i==5){
                mp.clear();
            }
        }
        change =false;
        mp.clear();
        for(int i=0;i<9;i++){
            for(int j=3;j<6;j++){
                if(board[j][i]!='.'){
                    mp[board[j][i]]++;
                    if(mp[board[j][i]]>1){
                        return false;
                        // change =true;
                    }
                }
            }
            if(i==2||i==5){
                mp.clear();
            }
        }
        mp.clear();
        for(int i=0;i<9;i++){
            for(int j=6;j<9;j++){
                if(board[j][i]!='.'){
                    mp[board[j][i]]++;
                    if(mp[board[j][i]]>1){
                        return false;
                        // change =true;
                    }
                }
            }
            if(i==2||i==5){
                mp.clear();
            }
        }
        return true;
    }
};
