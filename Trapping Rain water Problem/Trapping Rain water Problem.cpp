#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	int n,i,water=0;
	cin>>n;
	int a[n];
	int left[n],right[n];
	
	for(i=0;i<n;i++)
	cin>>a[i];
	
	left[0]=a[0];
	
	for(i=1;i<n;i++)
	left[i]=max(left[i-1],a[i]);
	
	right[n-1]=a[n-1];
	for(i=n-2;i>=0;i--)
	right[i] = max(right[i+1], a[i]); 
	
	for(i=0;i<n;i++)
	water += min(left[i],right[i]) - a[i]; 
	
	cout<<water<<endl;
	}
	return 0;
}
