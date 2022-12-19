#include <stdio.h>
#include <stdbool.h>
void lazyjem(long long int n,long long int b,long long int m,long long int sum);
void lazyjem(long long int n,long long int b,long long int m,long long int
sum)
{
 // long long res = 0;
 while(true)
 {
 sum+=(n+1)/2 * m;
 n-=(n+1)/2;
 if(!n)
 {
 break;
 }
 sum+=b;
 m*=2;
 }
 printf("%lld\n",sum);
}
int main()
{ int t;
 scanf("%d",&t);
 while(t--)
 {
 long long n,b,m,sum=0;

 scanf("%lld %lld %lld",&n,&b,&m);
 lazyjem(n,b,m,sum);
 }
return 0;
}
