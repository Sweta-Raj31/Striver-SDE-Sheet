
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        //so the implace solution I can think of it is take transpose the reverse the row wise
       
        int n=matrix.size();
        int m=matrix[0].size();
        // transpose the matrix
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                  swap(matrix[i][j],matrix[j][i]);
            }
        }
       //reverse each row
       for(int i=0;i<n;i++)
       {
        reverse(matrix[i].begin(),matrix[i].end());
       }
        
    }
};

// Time Complexity is O(N^2)
//space Complexity O(1)
