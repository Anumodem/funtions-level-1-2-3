#include <stdio.h>
#include <string.h>
int g[35][35];
char s[35],str[35][35];
int length,len[35],n;
int solution(int a,int b)
{
int seen[100],i,j,x,y;
if(a>b){g[a][b]=0;return 0;}

if(g[a][b]!=-1)
return g[a][b];
for(i=0;i<100;i++)
seen[i]=0;
for(j=0;j<n;j++)
for(i=a;i+len[j]-1<=b;i++)
if(strncmp(s+i,str[j],len[j])==0)
{
x=solution(a,i-1);
y=solution(i+len[j],b);
seen[x^y]=1;
}
i=0;
while(seen[i])i++;
g[a][b]=i;
return g[a][b];
}
int main()
{
int t,i,j;
scanf("%d",&t);
while(t--)
{
scanf("%s %d",s,&n);

length=strlen(s);
for(i=0;i<n;i++)
{
scanf("%s",str[i]);
len[i]=strlen(str[i]);
}
for(i=0;i<length;i++)
for(j=0;j<length;j++)
g[i][j]=-1;
if(solution(0,length-1))
printf("Nancy\n");
else
printf("Athika\n");
}

return 0;
}
