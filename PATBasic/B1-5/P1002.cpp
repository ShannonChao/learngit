#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main()
{
	int n=0;
	char ch;
	string st;
	stack<string> s;
	bool flag = false;

	while((ch=cin.get())!='\n')
	{
		n+=ch-'0';
	}
	while(n)
	{
		switch(n%10)
		{
		case 0:
			st = "ling";
			break;
		case 1:
			st = "yi";
			break;
		case 2:
			st = "er";
			break;
		case 3:
			st = "san";
			break;
		case 4:
			st = "si";
			break;
		case 5:
			st = "wu";
			break;
		case 6:
			st = "liu";
			break;
		case 7:
			st = "qi";
			break;
		case 8:
			st = "ba";
			break;
		case 9:
			st = "jiu";
			break;
		}
		s.push(st);
		n/=10;
	}

	while(!s.empty())
	{
		if(flag)
			cout<<" ";
		else
			flag = true;
		cout<<s.top();
		s.pop();
	}
	cout<<endl;
	return 0;
}
