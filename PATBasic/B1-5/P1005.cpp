#include<iostream>
using namespace std;

void msort(int num[100],int n)
{
	int i,j,k;
	for(i=1;i<n;i++)
	{
		k=num[i];
		j=i-1;
		while(j!=-1&&k<num[j])
		{
			num[j+1]=num[j];
			j--;
		}
		num[j+1]=k;
	}
}

int main()
{
	int n,i,j,temp,sym=0;
	cin>>n;
	int num[100],flag[100]={0};
	for(i=0;i<n;i++)
		cin>>num[i];
	msort(num,n);
	
	for(i=0;i<n;i++)
	{
		if(flag[i]==0)
		{
			temp=num[i];
			while(temp!=1)
			{
				if(temp/2*2==temp)
				{
					temp=temp/2;
				}
				else
				{
					temp=(3*temp+1)/2;
				}
				for(j=0;j<n;j++)
				{
					if((j!=i)&&(flag[j]==0)&&(temp==num[j]))
							flag[j]=1;
					
				}
				
			}
		}
	}
	for(i=n-1;i>=0;i--)
	{
		
		if(flag[i]==0)
		{
			if(sym==1)
				cout<<" ";
			else 
				sym=1;
			cout<<num[i];
		}
	}
	cout<<endl;
	return 0;
}

				





	