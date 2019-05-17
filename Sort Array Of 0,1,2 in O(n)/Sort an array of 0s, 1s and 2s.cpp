#include<bits/stdc++.h>
using namespace std;
void swap(int *a,int *b)
{
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
}
int main()
 {
int t,n,i,j,sum,m;
cin>>t;
while(t--)
{
   cin>>n;
   int a[n];
   for(i=0;i<n;i++)
   cin>>a[i];
   i=0;j=n-1,m=0;
       while(a[i]==0)
       i++;
       while(a[j]==2)
       j--;
       while(a[i]==2 && a[j]==0 && i<j)
       a[i++]=0,a[j--]=2;
       m=i;
          while(m<=j)
   {
       while(a[j]==2)
       j--;
       if(a[m]==2 && m<=j)
       swap(&a[m],&a[j--]);
       else if(a[m]==0)
       swap(&a[m++],&a[i++]);
       else
       m++;
   }
   for(i=0;i<n;i++)
   cout<<a[i]<<" ";
   cout<<endl;
}
	return 0;
}

