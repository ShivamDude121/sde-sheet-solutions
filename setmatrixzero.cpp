class Solution {
public:
    void setZeroes(vector<vector<int>>& arr) {


        int n=arr.size();
        int m=arr[0].size();


        int x=-1;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
               
              if( i==0 && arr[i][j]==0 ){
                x=0;
                arr[0][j]=0;
              }
              else if(arr[i][j]==0){
                arr[0][j]=0;
                arr[i][0]=0;
              }

            }
        }





        for(int j=1;j<m;j++){
            if(arr[0][j]==0){
                for(int i=0;i<n;i++)
                arr[i][j]=0;
            }
        }


      for(int i=1;i<n;i++){
        if(arr[i][0]==0){
            for(int j=0;j<m;j++)
            arr[i][j]=0;
        }
      }


     if(arr[0][0]==0){
        for(int i=0;i<n;i++)
        arr[i][0]=0;

     }
      if(x==0){
        for(int j=0;j<m;j++)
        arr[0][j]=0;
      }     
        
    }
};
