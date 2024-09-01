class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        

        vector<vector<int>> ans(numRows);

        for(int i=0;i<numRows;i++){
            ans[i]=vector<int>(1+i);


            ans[i][0]=1;
            ans[i][i]=1;

        }

      for(int i=1;i<numRows;i++){
        for(int j=1;j<i;j++){
            ans[i][j]=ans[i][j-1]*(i+1-j);
            ans[i][j]/=j;
            
            }
      }

        return ans;
    }
};
