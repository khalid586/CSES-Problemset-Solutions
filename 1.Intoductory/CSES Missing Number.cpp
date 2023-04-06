#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
 
int main()
{
     int n;
     cin>>n;
 
     int a[n-1];
 
     for(int i=0;i<n-1;i++)
     {
         cin>>a[i];
     }
     sort(a,(a+n-1));
 
     for(int j=0;j<n;j++)
     {
         if(a[j]!=j+1)
         {
             printf("%d\n",j+1);
             break;
         }
     }
 
     return 0;
}