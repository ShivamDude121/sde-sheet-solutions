#include <bits/stdc++.h> 



long long solve(long long arr[],int str,int end){
    if(str>=end)
    return 0;


    int mid=(str+end)/2;
    long long x=solve(arr,str,mid);
    long long y=solve(arr,mid+1,end);
    long long z=0;

    vector<int> temp;

    int i=str;
    int j=mid+1;

    while(i<=mid&&j<=end){
        if(arr[i]>arr[j]){
            z+=mid-i+1;
            temp.push_back(arr[j++]);
        }
        else{
            temp.push_back(arr[i++]);
        }
    }

    while(i<=mid){
        temp.push_back(arr[i++]);
    }

    while(j<=end){
        temp.push_back(arr[j++]);

    }

    int k=str;


    for(auto i: temp)
    arr[str++]=i;


    return x+y+z;


}

long long getInversions(long long *arr, int n){



    return solve(arr,0,n-1);
    



    
}
