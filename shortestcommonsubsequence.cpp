int shortestCommonSupersequence(string s1, string s2, int n, int m)
    {
        //total length - lcs
        int i=0,j=0;
       int  t[n+1][m+1];
       int sum=n+m;
     
       for(i=0;i<n+1;i++)
       {
           for(j=0;j<m+1;j++)
           {
               if(i==0||j==0)
               t[i][j]=0;
           }
       }
       
       for(i=1;i<n+1;i++)
       {
           for(j=1;j<m+1;j++)
           {
               if(s1[i-1]==s2[j-1])
               {
                   t[i][j]=t[i-1][j-1]+1;
               }
               else
               {
                   t[i][j]=max(t[i-1][j],t[i][j-1]);
               }
           }
       }
        
       return (m+n)-t[n][m];
    }
};
