#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int T;
	cin>>T;
	int mini=INT_MAX;
	while(T--)
	{
	    int X;
	    cin>>X;
	    int Y;
	    cin>>Y;
	    int cnt=0;
	    while(X>=2*Y || Y>=2*X)
	    {
	        if(X>=2*Y)
	        {
	            --Y;
	        }
	        else
	        {
	            --X;
	        }
	        cnt++;
	        mini=min(mini, cnt); // Update mini inside the loop
	    }
	}
	cout<<mini<<endl;
	return 0;
}