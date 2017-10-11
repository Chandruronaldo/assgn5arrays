#include <iostream>
using namespace std;


void klarsmall(int a[100],int n,int q,int t)
{
	            int k[n],count,count2[n],pk[n],p=0,lar;
	count=0;
            float m;
	for(int i=-32768;i<32767;i++)
	{
	      for(int j=0;j<n;j++)
	      {
	      	if(i==a[j])
	      	{k[count]=a[j];
	      	count++;}
	      }
	}
	//for(int i=0;i<n;i++)
    //cout<<"\n"<<k[i];
	for(int i=0;i<n;i++)
	count2[i]=0;
	for(int i=0;i<n;i++)
	pk[i]=0;
	for(int i=0;i<n&&p<n;i++)
	{
		for(int j=i;j<n&&p<n;j++)
		{
 
			if(k[j]==k[i])
			count2[p]++;
 
		}
	            pk[p]=k[i];
		i+=count2[p]-1;
		p++;
	}
	cout<<"\n";
	cout<<"\n the kth largest number is  "<<pk[n-q-2];
	cout<<"\n the ith smallest number is  "<<pk[q-1];
}

int main() {
	int s[100],n,q,t;
	cout<<"\n enter the number elements in the array";
	cin>>n;
	cout<<"\n enter the value of elements in the array";
	for(int i=0;i<n;i++)
	{
		cin>>s[i];
	}
	cout<<"\n enter the value of k (kth largest element) ";
	cin>>q;
	cout<<"\n enter the value of i (ith smallest element) ";
	cin>>t;
	klarsmall(s,n,q,t);
	return 0;
}