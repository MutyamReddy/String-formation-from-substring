#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string s;
    while(t--)
    {
        cin>>s;
        if((s+s).substr(1,2*s.size()-2).find(s)!=-1)
            cout<<"True\n";
        else
            cout<<"False\n";
    }
	
	return 0;
}
