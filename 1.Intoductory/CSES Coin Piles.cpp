#include<iostream>
#include<algorithm>
 
typedef long long ll;
using namespace std;
 
int main()
{
    cin.tie(0), ios::sync_with_stdio(0);
    ll n,a,b;

    cin>>n;
    
    while(n--){
           cin>>a>>b;

           if((a+b)%3==0 && min(a,b)*2>=max(a,b))  cout<<"YES\n";
           else                                    cout<<"NO\n";
    }
    return 0;
}