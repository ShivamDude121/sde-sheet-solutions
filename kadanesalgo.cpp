class Solution {
public:
    int maxSubArray(vector<int>& nums) {



        int bag=0;
        int maxi=INT_MIN;


        for(auto i : nums){
            bag+=i;

            maxi=max(maxi,bag);


            if(bag<0)
            bag=0;

        }
        

        return maxi;
    }
};
