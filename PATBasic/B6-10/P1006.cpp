#include<iostream>
using namespace std;
int main()
{
	int n,i,temp;
	cin>>n;

	temp=n/100;
	for(i=1;i<=temp;i++)
	{
		cout<<"B";
	}

	temp=n%100/10;
	for(i=1;i<=temp;i++)
	{
		cout<<"S";
	}

	temp=n%10;
	for(i=1;i<=temp;i++)
	{
		cout<<i;
	}
	cout<<endl;
	return 0;
}
