#include <stdio.h>
const int maxn = 1e7+5;
long long int inv[10000005];
void modularInverse(long long int n, long long int prime)
{
    long long int i;
    inv[0]= inv[1]=1;
    for(i=2;i<=n;i++)
    inv[i]=inv[prime%i]*(prime-prime/i)%prime;
    }

long long int gcdExtended(long long int a, long long int b,long long int *x,long long int *y);
long long int modInverse(long long int b,long long int  m)
{
    long long int x,y;
    long long int g= gcdExtended(b,m,&x,&y);
    if(g!=1)
    return-1;
    return (x%m + m )% m;
}
long long int modDivide(long long int a,long long int b)
{
    long long int m= 1000000007;
    long long int inv=modInverse(b,m);
    return (((inv*a)%m)+m)%m;
}
long long int gcdExtended(long long int a, long long int b,long long int *x,long long int *y)
{
    if(a==0)
    {
        *x=0,*y=1;
        return b;
    }
    long long int x1,y1;
    long long int gcd=gcdExtended(b%a,a,&x1,&y1);
    *x=y1-(b/a)*x1;
    *y=x1;
    return gcd;
    }
    int power(long long int x,long long int y)
{
    long long int res=1;
    x=x%1000000007;
    while(y>0)
    {
        if(y&1)
        res=(res*x)%1000000007;
        y=y>>1;
        x=(x*x)%1000000007;
                }
                return res%1000000007;
}
long long int modmulti(long long int a,long long int b)
{
    return (a*b)%1000000007;
}
long long int binomialCoeff(long long int n,long long int k)
{
long long int res=1,i;
for(i=0;i<k;i++);
{
    res= modmulti(res,n-1);
    res=modDivide(res,i+1);
    
}
return res;
}
int main()
{
    long long int n,k,a,b,i;
    scanf("%lld %lld %lld %lld",&n,&k,&a,&b);
    long long int res=0;
    if(a==0)
    {
       long long int f=modmulti(b,k);
        res=power(f,n-1);
        res=modmulti(res,k);
        res=res*binomialCoeff(2*(n-1),n-1);
        res=res%1000000007;
        res=modDivide(res,n);
        printf("%lld\n",res);
            }
            else{
                modularInverse(maxn-1,1000000007);
                long long int f=modmulti(b,k),p,m=n-1,o=n,q=1;
                p=power(a,m);
                long long int yu=modDivide(1,a);
                res=p;
                for(i=1;i<n;i++)
                {
                    long long int v=modmulti(inv[q],inv[q]);
                    long long int w=modmulti(v,inv[(i+1)]);
                    p=modmulti((yu*p)%1000000007,(i*f)%1000000007);
                    p=(p*(modmulti(o,m)))%1000000007;
                    p=modmulti(p,w);
                    o++;m--;q++;
                    res=(res%1000000007)+(p%1000000007);
            
                }
            
            res=modmulti(res,k);
            printf("%lld\n",res);}
            return 0;
}
