#include<bits/stdc++.h>
using namespace std;
//code by aparna juhi
int main()
{
	//taking input an array
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
	 	cin>>arr[i];
	}
	//Get input of customer's money
	int customer;
	cout<<"customer has money : ";
	cin>>customer;
	
	int count=0; //number of items customer can buy
	for(int i=0;i<n;i++)
	{
	 	if(arr[i]<=customer)
	 	count++;
	}
	//robot gives input
	int robot;
	cout<<"robot says : ";
	cin>>robot;
	if(robot==count)
	cout<<"Right";
	else
	cout<<"Wrong";	
}



