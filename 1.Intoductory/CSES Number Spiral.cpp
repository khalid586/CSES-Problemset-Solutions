#include<iostream>
using namespace std;
 
int main()
{
 
 ios::sync_with_stdio(0); 
 cin.tie(0);
long long x,y,t;
 
  cin>>t;
  while(t--)
  {  
        cin>>y>>x;
 
        if(y%2==0)
        {
 
            if(x<=y) printf("%lld\n",(y*y)-x+1);
            else
            {
                if(x%2==0) printf("%lld\n",(x-1)*(x-1)+y);
                else       printf("%lld\n",x*x-y+1);
    
            }
        }
        else
        {
                if(x<=y)  printf("%lld\n",(y-1)*(y-1)+x);
                else
                {
                     if(x%2==0) printf("%lld\n",(x-1)*(x-1)+y);
                     else       printf("%lld\n",x*x-y+1); 
                }
        }
  }
  return 0;
}