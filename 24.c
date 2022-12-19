#include <stdio.h>
long long int coef(int n,int k)
{
 return 1;
}
int main()
{int i,j,r,c,t,k,a[101][101],b[101];
a[0][0]=1;
for(i=1;i<=50;++i)
for(j=0;j<=i;++j)
if(j==0)
a[i][j]=a[i-1][j];
else
a[i][j]=a[i-1][j]+a[i-1][j-1];
scanf("%d",&t);
coef(1,2);
while(t--){
 scanf("%d %d %d",&r,&c,&k);
 r=0;
 for(i=c;i>0;--i){
 if(k<=0)
 break;
 j=i;
 while(a[j][i]<=k)
 j++;
 j--;
 b[r]=a[j][i];
 ++r;
 k-=a[j][i];
 }

 printf("%d\n",r);
 for(i=0;i<r;i++)
 printf("%d ",b[i]);
 printf("\n");
}
return 0;
}
