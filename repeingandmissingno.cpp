#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here 



	int xo=0;

	for(int i=0;i<n;i++)
	xo=xo^arr[i]^(i+1);


	int i;
	for(i=0;i<32;i++){
		if(xo&(1<<i))
		break;
	}


	int a=0;
	int b=0;


	for(int j=0;j<n;j++){

		if(arr[j]&(1<<i))
		a^=arr[j];
		else
		b^=arr[j];


		if((j+1)&(1<<i))
		a^=(j+1);
		else
		b^=(j+1);


	}



	pair<int,int> ans;
	ans.first=a;
	ans.second=b;
	return ans;



















	



}
