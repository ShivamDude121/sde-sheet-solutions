class Solution {
public:
    int findDuplicate(vector<int>& arr) {


        if(arr.size()==1) return arr[0];


        int slow=arr[0];
        int fast=arr[0];

        while(1){
            slow=arr[slow];
            fast=arr[arr[fast]];

            if(slow==fast)
            break;
        }

        slow=arr[0];


        while(1){
            if(slow==fast)
            return slow;

            slow=arr[slow];
            fast=arr[fast];
        }

        
        
    }
};
