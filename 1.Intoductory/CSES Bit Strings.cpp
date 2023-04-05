#include<iostream>
#include<math.h>
using namespace std;
 
int main()
{
    long long x,c=2;
    long long  M=pow(10,9)+7;
    scanf("%lld",&x);

    for(long long i=1;i<=x-1;i++) c=(c%M*2%M)%M;
    printf("%lld\n",c);
    
    return 0;
}