#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef double dd;
typedef greater<ll> gt;
typedef  vector<ll> vec ;
typedef  deque<ll> dq ;
typedef  vector<char> vst ;
typedef vector<ll> ::iterator vecita;
typedef  list<ll> li;
typedef list<ll> ::iterator liita;
#define pb push_back
#define pob pop_back
#define pf push_front
#define ss stringstream
#define st  string
#define rep(i,a,b) for (int i = a; i < b; i++)
#define rep2(i,a,b) for (int i = a; i <= b; i++)
#define rep3(i,a,b) for (int i = a; i >= b; i--)
#define mp make_pair
#define king  cin.tie(0), ios::sync_with_stdio(0),cout.tie(0);
#define outl(x) cout << x << "\n";
 
int main()
{
   king
   ll t ,pro,a;
   ll j=0,k=1;
 
   cin>>t;
   for(a=1;a<=t;a++)
   {
      if(a==1)
      {
         cout<<0<<endl;
      }
      else
      {
         pro=(pow(a,2)*(pow(a,2)-1)-16*j)/2;
         j+=k;
         ++k;
         cout<<pro<<endl;
      }
 
   }
   return 0;
}
 