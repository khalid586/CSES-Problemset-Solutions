#include<bits/stdc++.h>
 
using namespace std;
typedef long long ll;

int main()
{
    char a[1000000];
    ll len,highest =1,c=1;
    cin>>a;
 
    len= strlen(a);
 
    for(int i =0;i<len;i++)
    {
       if(a[i]==a[i+1])
       {
           c+=1;
           if(c>highest)
           {
               highest=c;
           }
       }
       else
       {
           c=1;
       }
    }
 
 
    cout<<highest<<endl;
 
    return 0;
}