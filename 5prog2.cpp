#include <iostream>
using namespace std;


void lar(int a[100],int n)
{
	int lar;
	lar=a[0];
	for(int i=0;i<n;i++)
	{
		if(a[i]>lar)
		lar=a[i];
		
	}
	cout<<"\n the largest number in the array is  "<<lar;
}
void small(int a[100],int n)
{
	int small,k;
	small=a[0];
	for(int i=0;i<n;i++)
	{           
		//k=a[i];
		if(a[i]<small)
		small=a[i];
		
	}
	cout<<"\n the smallest number in the array is  "<<small;
}
void mean(int a[100],int n)
{
	int sum=0;
	float mean;
	for(int i=0;i<n;i++)
	{
		sum+=a[i];
	}
	mean=(float)sum/n;
	cout<<"\n the mean of elements in the array is  "<<mean;
}
void median(int a[100],int n)
{
	int k[n],count;
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
	if(n%2==0)
		{
			m=(a[n/2]+a[(n/2)-1]);
			m/=2;
			
		}
	else
	m=a[n/2];
	cout<<"\n the median of the elements is  "<<m;
}
int frequency(int a[100],int n)
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
	//for(int i=0;i<n;i++)
        //cout<<"\n"<<count2[i];
	//cout<<"\n\n the numbers without rep";
	//for(int i=0;i<n;i++)
	//cout<<"\n"<<pk[i];
		
	lar=count2[0];
	for(int i=0;i<n;i++)
	{
		if(count2[i]>lar)
		lar=count2[i];
		
	}
	cout<<" the element with highest frequency is  ";
	for(int i=0;i<n;i++)
	{
		if(lar==count2[i])
		cout<<"\n"<<pk[i];
	}
}
int main() {
	int s[100],n;
	cout<<"\n enter the number elements in the array";
	cin>>n;
	cout<<"\n enter the value of elements in the array";
	for(int i=0;i<n;i++)
	{
		cin>>s[i];
	}
	lar(s,n);
	small(s,n);
	mean(s,n);
	median(s,n);
	frequency(s,n);
	
		return 0;
}
