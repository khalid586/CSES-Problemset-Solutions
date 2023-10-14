#include <bits/stdc++.h>
using namespace std;

#define rep(i,a,b)      for(int i = a; i <  b;++i)
#define rev(i,a,b)      for(int j = a; j >= b;--j)

void solve(int t){
     string s;
     cin >> s;

     int n = s.size() , cnt = 1 , mx = 1;

     rep(i,1,n){
         if(s[i] == s[i-1]) ++cnt;
         else cnt = 1;

         mx = max(cnt,mx);
     }

     cout << mx << '\n';
}

int32_t main()
{
    solve(1);
     return 0;
}

