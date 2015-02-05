#include<iostream>
#include<string>
#include<stack>
using namespace std;

int main()
{
	int flag = 0;
	string sp;
	stack<string> s;

	while(cin>>sp)
		s.push(sp);
  
	while(!s.empty())
	{
		if(flag)
			cout<<" ";
		else
			flag=1;
		cout<<s.top();
		s.pop();
	}
	return 0;
}