#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int A,B,DA,DB,sum=0;
	scanf("%d%d%d%d",&A,&DA,&B,&DB);
	int i=0;
	do{
		if(A%10==DA)
		{
			sum+=DA*pow(10.0,i);
			i++;
		}
		A/=10;
	}while(A!=0);
	int j=0;
	do{
		if(B%10==DB)
		{
			sum+=DB*pow(10.0,j);
			j++;
		}
		B/=10;
	}while(B!=0);
	printf("%d\n",sum);
	return 0;
}



