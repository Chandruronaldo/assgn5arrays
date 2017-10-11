#include <iostream>
using namespace std;

void sum(int a[100],int n)
{
	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum+=a[i];
	}
	cout<<"\n the sum of all the elements in the array "<<sum;
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
	sum(s,n);
	return 0;
}
