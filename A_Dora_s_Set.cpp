#include<bits/stdc++.h>
using namespace std ;
int gcd(int a , int b )
{
    while(b)
    {
        swap(a, b);
    }
    return a ;
}
int solve()
{
int t;
cin>>t;
while(t--)
{
  int l;
  cin>>l;
  int r;
  cin>>r;
  set<int>s;
  int n =s.size();
  for(int i=0 ; i< n; i++ )
  {
    s.insert(i);
  }
   int oper=0;
  while(n<=3)
  {
    bool norm = false;
  for( auto it1 = s.begin() ; it1!=s.end() ; it1++)
  {
    for(auto it2= next(it1) ; it2!=s.end(); it2++)
    {
        for(auto it3=next(it2); it3!=s.end() ; it3++)
        {
            if( gcd(*it1 , *it2)==1 && gcd(*it2 , *it3)==1 && gcd(*it3 , *it1)==1)
            {
                s.erase(it1);
                 s.erase(it2);
                  s.erase(it3);
                oper++;
                norm=true;
                break;
            }
        }
        if(norm)break;
    }
    if(norm)break;
  }
  }
  cout<<oper<<endl;
}
return 0;
}
int main()
{
    solve();
    return 0;
}