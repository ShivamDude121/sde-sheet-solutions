class Solution {
public:
    void sortColors(vector<int>& nums) {

        int str=0;
        int mid=0;
        int end=nums.size()-1;


        while(mid<=end){

            if(nums[mid]==0){
                swap(nums[str++],nums[mid++]);
               
            }
            else if(nums[mid]==1){
                mid++;
               
            }
            else if(nums[mid]==2){
                swap(nums[mid],nums[end--]);
            }






        }

        
    }
};
