vector<string> longest_common_subsequences(string s, string t)
		{
		    // Code here
		    
		    int i=0,j=0,n=0,m=0;
		    n=s.length();
		    m=t.length();
		    i=n;
		    j=m;
		    int mat[n+1][m+1];
		    
		    vector<string> str;
		    
		    while(i>0 && j>0)
		    {
		        if(s[i-1]==t[j-1])
		        {
		            str.push_back(string(1, s[i - 1])); 
		            i--;
		            j--;
		        }
		        
		        else
		        {
		            if(mat[i-1][j]>mat[i][j-1])
		            {
		                i--;
		            }
		            else
		            {
		                j--;
		            }
		        }
		    }
		    
		    return str;
		}
};
