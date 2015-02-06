#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
struct stu{
		int id;
		int de;
		int cai;
	};

bool greater_sco(stu s1,stu s2)
{
	if(s1.de+s1.cai!=s2.cai+s2.de)
		return (s1.cai+s1.de)>(s2.cai+s2.de);
	else if(s1.de!=s2.de)
		return s1.de>s2.de;
	else
		return s1.id<s2.id;
}

int main()
{
	vector<stu> all,doverc,doverc2,anoth;
	int N,L,H,i,k=0;
	stu temp;
	scanf("%d%d%d",&N,&L,&H);
	
	for(i=0;i<N;i++)
	{
		cin>>temp.id>>temp.de>>temp.cai;
		if(temp.cai>=L&&temp.de>=L)
		{
			k++;
			if(temp.cai>=H&&temp.de>=H)
			{
				all.push_back(temp);
			}
			else if(temp.de>=H)
			{
				doverc.push_back(temp);
			}
			else if(temp.cai<H&&temp.de>=temp.cai)
			{
				doverc2.push_back(temp);
			}
			else
			{
				anoth.push_back(temp);				
			}
		}
	}
	printf("%d\n",k);
	
	vector<stu>::iterator it;
	sort(all.begin(),all.end(),greater_sco);
	for(it=all.begin();it!=all.end();it++)
	{
		printf("%d %d %d\n",it->id,it->de,it->cai);
	}

	sort(doverc.begin(),doverc.end(),greater_sco);
	for(it=doverc.begin();it!=doverc.end();it++)
	{
		printf("%d %d %d\n",it->id,it->de,it->cai);
	}

	sort(doverc2.begin(),doverc2.end(),greater_sco);
	for(it=doverc2.begin();it!=doverc2.end();it++)
	{
		printf("%d %d %d\n",it->id,it->de,it->cai);
	}

	sort(anoth.begin(),anoth.end(),greater_sco);
	for(it=anoth.begin();it!=anoth.end();it++)
	{
		printf("%d %d %d\n",it->id,it->de,it->cai);
	}	
	return 0;
}