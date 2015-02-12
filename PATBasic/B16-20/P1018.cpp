#include<iostream>
using namespace std;
int main()
{
	int n,i;
	int s1=0,f1=0,p1=0,s2=0,f2=0,p2=0,c1=0,j1=0,b1=0,c2=0,j2=0,b2=0;
	char a,b,max1,max2;

	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		cin>>a>>b;
		if(a=='C')
		{
			if(b=='C')
			{
				p1++;
				p2++;
			}
			else if(b=='J')
			{
				s1++;
				f2++;
				c1++;
			}
			else if(b=='B')
			{
				f1++;
				s2++;
				b2++;
			}
		}
		if(a=='J')
		{
			if(b=='C')
			{
				f1++;
				s2++;
				c2++;

			}
			else if(b=='J')
			{
				p1++;
				p2++;
			}
			else if(b=='B')
			{
				s1++;
				f2++;
				j1++;
			}
		}
		if(a=='B')
		{
			if(b=='C')
			{
				s1++;f2++;b1++;
			}
			else if(b=='J')
			{
				f1++;s2++;j2++;
			}
			else if(b=='B')
			{
				p1++;
				p2++;
			}
		}
	}
	printf("%d %d %d\n",s1,p1,f1);
	printf("%d %d %d\n",s2,p2,f2);
	max1=b1>=j1&&b1>=c1?'B':(c1>=j1?'C':'J');
	max2=b2>=j2&&b2>=c2?'B':(c2>=j2?'V':'J');
	printf("%c %c\n",max1,max2);
	return 0;
}
		
		