#include<iostream>
#include<algorithm>
#include<vector>
 
typedef long long ll;
 
using namespace std;
 
int main()
{
 
   ll n,move=0,diff;
   cin>>n;
   ll ar[n];
 
   for(ll i=0;i<n;i++) cin>>ar[i];
   for(ll j=0;j<n-1;j++){
      diff=ar[j]-ar[j+1];
      
      if(diff>0){
         ar[j+1]+=diff;
         move+=diff;
      }
    
   }
   
   cout<<move<<"\n";
   return 0;
}