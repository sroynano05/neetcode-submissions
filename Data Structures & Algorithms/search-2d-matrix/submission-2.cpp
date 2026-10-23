class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int total =matrix.size()*matrix[0].size(),n=matrix[0].size();
        int i=0,j=total-1;
        while(i<=j){
            int mid=i+(j-i)/2;
            if(matrix[mid/n][mid%n]==target) return true;
            else if(matrix[mid/n][mid%n]<target){
                i=mid+1;
            }
            else{
                j=mid-1;
            }
        }
        return false;
    }
};
