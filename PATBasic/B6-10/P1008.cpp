#include<iostream>
using namespace std;
int main()
{
	int n,k,a[101],i,flag=1;

	cin>>n;
	cin>>k;
	k=k%n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<k;i++)
	{
		if(flag==1)
			flag=0;
		else
			cout<<" ";
		cout<<a[n-k+i];
	}
	for(i=0;i<n-k;i++)
	{
		if(flag==1)
			flag=0;
		else
			cout<<" ";
		cout<<a[i];
	}
	cout<<endl;
	return 0;
}