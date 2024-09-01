class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& arr) {

        if(arr.size()==0||arr.size()==1)
        return arr;

        sort(arr.begin(),arr.end());
      
        vector<vector<int>> ans;
         vector<int> node=arr[0];

         for(int i=1;i<arr.size();i++){
            if(arr[i][0]<=node[1]){
                node[0]=min(node[0],arr[i][0]);
                node[1]=max(node[1],arr[i][1]);
            }
            else{
                ans.push_back(node);
                node=arr[i];


            }
         }

         ans.push_back(node);

         return ans;
        
    }
};
