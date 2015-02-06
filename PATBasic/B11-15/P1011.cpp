#include<iostream>
using namespace std;
int main()
{
	int n,i;
	long long A,B,C;

	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>A;
		cin>>B;
		cin>>C;
		if(A+B>C)
			cout<<"Case #"<<i+1<<": true"<<endl;
		else
			cout<<"Case #"<<i+1<<": false"<<endl;
	}
	return 0;
}
