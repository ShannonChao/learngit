#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int i,j,n,sym,len,Acount1,Acount2,Acount3;
	char s[101];
	//freopen("D:\\Programming\\in.txt","r",stdin);
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",s);
		len=strlen(s);
		sym=0;Acount1=0;Acount2=0;Acount3=0;
		for(j=0;j<len;j++)
		{
			if(s[j]=='A')
			{
				if(sym==0)
					Acount1++;
				else if(sym==1)
					Acount2++;
				else if(sym==2)
					Acount3++;
			}
			else if(s[j]=='P'&&sym==0)
				sym=1;
			else if(s[j]=='T'&&sym==1)
				sym=2;
			else
			{
				sym=4;
				break;
			}
		}
		if(sym==2&&Acount2&&(Acount1*Acount2==Acount3))
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}
			

		
