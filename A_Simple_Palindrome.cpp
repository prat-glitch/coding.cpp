#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    int t;
    cin>>t;
    vector<char>vowels={ 'u' , 'o' , 'i' , 'e' , 'a'};
        int vowelindex=0;
        for(int i=0 ; i< t ; i++)
        {
        int n ;
        cin>>n;
        string result="";
        for(int j=0 ; j<n; j++)
        {
           result+=vowels[vowelindex];
           vowelindex=(vowelindex+1)%5;
            if ((i + 1) % 3 == 0 && i != 5) {
            }
        }
         cout<<result<<endl;
        }


    }
