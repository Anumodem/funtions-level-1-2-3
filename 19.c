#include <stdio.h>
void count(long long int a[],long long int y)
{
long long int sum=0,v;
for(v=1;v<100001;v++)
{
sum+=((y%v)*a[v]);

}
printf("%lld\n",sum);
}
int main()
{
long long int n;
scanf("%lld",&n);
long long int i;
long long int a[100001]={0};
for(i=1;i<=n;i++)
{
long long int size;
scanf("%lld",&size);
scanf("%lld",(a+size));
}
long long int m;
scanf("%lld",&m);
long long int j;
for(j=1;j<=m;j++)
{
char x;
long long int y;
scanf(" %c %lld",&x,&y);
if(x=='?')

count(a,y);
else
if(x=='-')
{
a[y]-=1;
}
else
if(x=='+')
{
a[y]+=1;
}
}
return 0;
}
