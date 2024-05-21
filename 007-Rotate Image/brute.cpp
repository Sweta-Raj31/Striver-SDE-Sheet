
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        // one solution is i will store a single data to its absolute position
        vector<vector<int>>ans;
        int n=matrix.size();
        int m=matrix[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                ans[i][j]=matrix[j][n-1-i];
            }
        }
        return ans;
        
    }
};
// time complexity is O(n^2)
//space Complexity is O(N^2)
