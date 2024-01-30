class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
        int i=0,j=0;
        int n=matrix.size();
        int m=matrix[0].size();
        vector<int> x(n,0),y(m,0);
        
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(matrix[i][j]==0)
                {
                   x[i]=1;
                 y[j]=1;
                 
                }
            }
        }

        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(x[i]||y[j])
                {
                    matrix[i][j]=0;
                }
            }
        }
    }
};
