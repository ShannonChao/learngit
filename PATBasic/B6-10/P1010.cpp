#include<iostream>
using namespace std;
int main()
{	
    int flag=1,tag=1,m,n,sum;
    while(cin>>m){
        if(m == 0)
            break;
        if(tag){
            n = m;
            tag = 0;
        }
        else{
            
            if(flag == 1)
			{
                cout<< n * m << " "<<m-1;
				flag=0;
			}
            else
			{
                cout<<" "<< n * m << " "<<m-1;
			}
			tag = 1;
        }
    }
    if(flag == 1)
        cout<<"0 0";
	cout<<endl;
    return 0;
}



