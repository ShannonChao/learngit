#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str;
	int n,temp=0,flag=1;
	cin>>str>>n;
	for(int i=0;i<str.length();i++)
	{
		temp = temp*10+str[i]-48;
		if(temp>=n)
		{
			printf("%d",temp/n);
			flag=0;
		}
		else if(!flag)
			printf("%d",0);
		temp = temp%n;
	}
	if(flag==1)
		printf("%d",0);
	printf(" %d\n",temp);
		return 0;
}