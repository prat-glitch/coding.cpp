#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int T;
	cin>>T;
	while(T--)
	{
	int A;
	cin>>A;
	int B;
	cin>>B;
	int X;
	cin>>X;
	int cnt=0;
	if((X*X)>=A*B)
	{
	    cnt=0;
	}
	else if(A>=X || B>=X)
	{
	   cnt=1;
	}
	else
	{
	    cnt=2;
	}
	  
	 cout<<cnt<<endl;
	}
	return 0;
	

}
