#include <bits/stdc++.h>
using namespace std;
 
//Starting in the name of Allah(THE ALMIGHTY)
void FastIO()
{
    #ifndef ONLINE_JUDGE
        freopen("in.txt","r",stdin);
      //  freopen("out.txt","w",stdout);
    #endif // ONLINE_JUDGE
}


int main()
{
    FastIO();
    int n , ans = 0 ; cin >> n;

    while(n>=5){ ans+=(n/5); n/=5;}
    
    cout << ans << '\n';
 
    return 0;
}
