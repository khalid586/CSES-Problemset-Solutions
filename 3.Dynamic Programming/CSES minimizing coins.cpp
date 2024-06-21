//Starting in the name of Allah(THE ALMIGHTY)

#include <bits/stdc++.h>
using namespace std;
const int N = 1e6+7;

#define int long long
#define rep(i,a,b)      for(int i = a; i <  b;++i)
#define rev(i,a,b)      for(int i = a; i >= b;--i)

void IO(){
      #ifndef ONLINE_JUDGE
         freopen("in.txt","r", stdin);
        //freopen("out.txt", "w", stdout);
         freopen("Error.txt", "w", stderr);
      #endif // ONLINE_JUDGE 
}

void solve(int t){   
   int n , x;
   cin >> n >> x;


   vector<int> a(n), ans(1000000 + 7,INT_MAX);

   rep(i,0,n){
      cin >> a[i];
      ans[a[i]] = 1;
   }  

   rep(i,1,x+1){
      rep(j,0,n){
         if(i - a[j] < 0){
            continue;
         }

         ans[i] = min(ans[i] , ans[i - a[j]] + 1);
      }
   } 

   // for(auto x:ans) cout << x << ' ';

   cout << (ans[x] == INT_MAX ? -1:ans[x]) << '\n';
}

int32_t main()
{
      IO();    
      
      int T = 1;
     // cin >> T;

      rep(i,1,T+1){
         solve(i);
      }

     return 0;
}