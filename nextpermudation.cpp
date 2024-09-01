class Solution {
public:
    void nextPermutation(vector<int>& nums) {
    
      if(nums.size()==1||nums.size()==0)
      return;

     int turn = -1;

     for(int i=nums.size()-2;i>=0;i--){
        if(nums[i]<nums[i+1]){
            turn=i;
            break;
        }
     }

        if(turn==-1){
            reverse(nums.begin(),nums.end());
            return;
        }

        for(int i=nums.size()-1;i>turn;i--){
            if(nums[i]>nums[turn]){
                swap(nums[i],nums[turn]);
                break;
            }
        }


       reverse(nums.begin()+turn+1,nums.end());
       return;        
    }
};
