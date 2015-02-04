#include<iostream>
#include<string>
using namespace std;
int main()
{
	struct item
	{
		string name;
		string numb;
		int sco;
	};

	item maxs,mins,temp;
	int n;
	cin>>n>>maxs.name>>maxs.numb>>maxs.sco;
	mins=maxs;

	while(--n)
	{
		cin>>temp.name>>temp.numb>>temp.sco;
		if(temp.sco>maxs.sco)
			maxs=temp;
		else if(temp.sco<mins.sco)
			mins=temp;
	}

	cout<<maxs.name<<" "<<maxs.numb<<endl;
	cout<<mins.name<<" "<<mins.numb<<endl;

	return 0;
}

