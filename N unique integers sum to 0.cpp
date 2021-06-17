#include<bits/stdc++.h>
using namespace std;

//code by aparna juhi
vector<int> func(int n) {
      int sum=0;
      vector<int>v;
      if(n==2)
       {
       	v.push_back(-1);
       	v.push_back(1);
       	return v;
	   }
      for(int i=0;i<n-1;i++)
      {
          v.push_back(i);
          sum+=i;
      }
      v.push_back(-sum);
      return v;
    }
int main()
{
	int n;
	cin>>n;
	vector<int>ans=func(n);
	for(int i=0;i<n;i++)
	cout<<ans[i]<<" ";
	
}



