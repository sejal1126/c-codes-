class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
      unordered_set<int> st;
      int i=0;
      for(i=0;i<nums.size();i++)
      {
          st.insert(nums[i]);
      }

      int currnum=0;
      int cnt=0;
      int maxlen=0;
      for(i=0;i<nums.size();i++)
      {
          if(st.find(nums[i]-1)==st.end())
          {
              currnum=nums[i];
              cnt=1;
              while(st.find(currnum+1)!=st.end())
              {
                  currnum+=1;
                  cnt+=1;
              }
          }
        maxlen=max(maxlen,cnt);
      }
      return maxlen;
    }
};
