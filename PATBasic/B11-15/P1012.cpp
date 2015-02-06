#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int n,i,temp,a1=0,a2=0,flag2=0,flag22=0,a3=0,a4=0,flag4=0,a5=0;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>temp;
		if(temp/10*10==temp)
			a1+=temp;
		if(temp%5==1)
		{
			flag22++;
			if(flag2==0)
			{
				a2+=temp;
				flag2=1;
			}
			else
			{
				a2-=temp;
				flag2=0;
			}
		}
		if(temp%5==2)
			a3++;
		if(temp%5==3)
		{
			a4+=temp;
			flag4++;
		}
		if(temp%5==4)
		{
			if(temp>a5)
				a5=temp;
		}
	}
	if(a1!=0)
		cout<<a1<<" ";
	else
		cout<<"N ";

	if(flag22!=0)
		cout<<a2<<" ";
	else
		cout<<"N ";

	if(a3!=0)
		cout<<a3<<" ";
	else
		cout<<"N ";

	if(flag4!=0)
		cout<<setiosflags(ios::fixed)<<setprecision(1)<<a4/(double)flag4<<" ";
	else
		cout<<"N ";

	if(a5!=0)
		cout<<a5;
	else
		cout<<"N";

	cout<<endl;

	return 0;
}
