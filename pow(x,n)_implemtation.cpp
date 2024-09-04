class Solution {
public:

    
    double myPow_1(double x,long long n) {
          
       if(n==0)
       return 1;
       if(n<0)
       return 1.0/myPow_1(x,-n);
       double z=myPow_1(x,n/2);

       if(n%2==0)
       return z*z;

       return z*z*x;


    }
    double myPow(double x, int n) {
          
       return myPow_1(x,(long long)n );
    }
};
