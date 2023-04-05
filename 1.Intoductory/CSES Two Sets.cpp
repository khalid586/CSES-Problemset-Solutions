#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef double dd;
typedef greater<ll> gt;
typedef  vector<ll> vec ;
typedef vector<ll> ::iterator vecita;
typedef  list<ll> li;
typedef list<ll> ::iterator liita;
#define pb push_back
#define pf push_front
 
 
int main()
{
 
 
 ios::sync_with_stdio(0);
 cin.tie(0);
 cout.tie(0);
 
 ll n,j,k;
 vec a,b;
 
 cin>>n;
 
 ll half=(n*(n+1))/2;
 
  if(half%2==0)
  {
     cout<<"YES\n";
     half/=2;
    for(ll i=n;i>=1;i--)
    {
        if(half>=i)
        {
            a.pb(i);
            half-=i;
 
        }
        else
        {
            b.pb(i);
        }
 
    }
      cout<<a.size()<<endl;
     for( j=0;j<a.size();j++)
     {
        cout<<a[j]<<" ";
     }
     cout<<"\n";
     cout<<b.size()<<endl;
     for( k=0;k<b.size();k++)
     {
        cout<<b[k]<<" ";
     }
      cout<<"\n";
 
  }
 
 
  else
  {
     cout<<"NO\n";
  }
 
  return 0;
}