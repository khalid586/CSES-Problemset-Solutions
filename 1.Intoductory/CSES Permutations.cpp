#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n ;
    cin>>n;
 
    if( n==2 || n==3)cout<< "NO SOLUTION\n";

    else if( n==1) cout<< "1\n";
    else if( n==4) cout<< "2 4 1 3\n";
 
    else if(n%2==0)
    {
          for(int i=1;i<=n-1;i+=2)  cout<<i<<"\n";
          for(int i=2;i<=n;i+=2)    cout<<i<<"\n";
    }
    else
    {
        for(int i=1;i<=n;i+=2) cout<<i<<"\n";
        for(int i=2;i<n;i+=2)  cout<<i<<"\n";
          
    }
    return 0;
}
