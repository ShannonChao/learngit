#include <iostream>
using namespace std;
int main()
{
	int n,i=0;
	cin>>n;
	while(n!=1)
	{
		if(n/2*2==n)
			n=n/2;
		else
			n=(3*n+1)/2;
		i++;
	}
	cout<<i;
	return 0;
}