// keeping in consideration that matrix has only binary digit
class Solution {
public:

void markRow(int i,int m,vector<vector<int>>& matrix)
{
    for(int j=0;j<m;j++)
    {
        if(matrix[i][j]!=0 ) matrix[i][j]=-1;
    }
}

void markCol(int j,int n,vector<vector<int>>& matrix)
{
    for(int i=0;i<n;i++)
    {   if(matrix[i][j!=0])
        matrix[i][j]=-1;
    }
}
    void setZeroes(vector<vector<int>>& matrix) {
        //brute force 
        int n=matrix.size();
        int m=matrix[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(matrix[i][j]==0)
                {
                    markRow(i,m,matrix);
                    markCol(j,n,matrix);
                }
            }
        }

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(matrix[i][j]==-1)
                {
                    matrix[i][j]=0;
                }
            }
        }
        
    }
};

// time complexity is O(N*M)(N+M)+(N*M) =O(N^3)
//space complexity is O(1)
