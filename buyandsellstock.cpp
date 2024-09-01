class Solution {
public:
    int maxProfit(vector<int>& prices) {


        int m_i=INT_MAX;
        int ans=0;


        for(auto i : prices){
            m_i=min(m_i,i);
            ans=max(ans,i-m_i);
        }


        return ans;
        
    }
};
