#include <bits/stdc++.h>
using namespace std;
//code by aparna juhi
void func(int W, int wt[], int val[], int n)
{
	int i,w;
	int knapsack[n+1][W+1];
	for (i=0; i<= n; i++) {
	for (w=0; w<= W; w++) {
		if (i==0 || w==0)
		{
			knapsack[i][w] = 0;
		}
		else if (wt[i - 1]<=w)
			knapsack[i][w]=max(val[i - 1] +knapsack[i - 1][w - wt[i - 1]], knapsack[i - 1][w]);
		else
			knapsack[i][w]=knapsack[i - 1][w];
		}
	}
	int res=knapsack[n][W];
	w=W;
	for (i=n;i>0 && res>0;i--) {
		if (res == knapsack[i - 1][w])
			continue;	
		else {
			cout<<wt[i-1]<<" ";
			res=res-val[i - 1];
			w=w-wt[i - 1];
		}
	}
}
int main()
{
	int n;
	cout<<"Number of items are :";
	cin>>n;
	int val[n],wt[n];
	cout<<"Values are : ";
	for(int i=0;i<n;i++)
	cin>>val[i];
	cout<<"Weigths are :";
	for(int i=0;i<n;i++)
	cin>>wt[i];
	cout<<"Max weight is :";
	int W;
	cin>>W;
	cout<<"Items are: ";
	func(W, wt, val, n);
	return 0;
}

