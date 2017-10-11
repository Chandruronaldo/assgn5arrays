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
	cout<<"\n the largest number in the combined array is  "<<lar;
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
	cout<<"\n the smallest number in the combined array is  "<<small;
}

int main() {
	int s1[100],s2[100],s[200],n,m,k,q;
	cout<<"\n enter the number elements in the array 1";
	cin>>n;
	cout<<"\n enter the value of elements in the array 1";
	for(int i=0;i<n;i++)
	{
		cin>>s1[i];
	}
	cout<<"\n enter the number elements in the array 2";
	cin>>m;
	cout<<"\n enter the value of elements in the array 2";
	for(int i=0;i<m;i++)
	{
		cin>>s2[i];
	}
	for(int i=0;i<n;i++)
	{
			s[i]=s1[i];
	}
	k=n;
	for(int i=0;i<m;i++)
		{
			s[k]=s2[i];
			k++;
		}
	cout<<"\n the combined array is ";
	for(int i=0;i<n+m;i++)
	cout<<"\n"<<s[i];
	q=n+m;
	lar(s,q);
	small(s,q);
	
	return 0;
}