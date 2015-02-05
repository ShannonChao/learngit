#include <iostream>
#include <math.h>
using namespace std;

bool isprime(int n)
{
	int i;
	for(i=2;i<=(int)sqrt((double)n);i++)
		if(n%i==0)
			return 0;
	return 1;	
}

int twinprime(int n)
{
	if(n==1||n==2||n==3||n==4)
		return 0;
	else if(n/2*2==n)
		return twinprime(n-1);
	else if(!isprime(n))
		return twinprime(n-1);
	else
	{
		if(isprime(n-2))
			return twinprime(n-2)+1;
		else
			return twinprime(n-4);
	}
}
int main()
{
	int n;
	cin>>n;

	cout<<twinprime(n)<<endl;

	return 0;
}

	
