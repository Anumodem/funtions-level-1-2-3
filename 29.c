#include <stdio.h>
#include <string.h>
void del(char a[1000],int i){ }
int initcheck(char a[1000],char b[1000] )
{
 int i;
 int flag=1;
 for(i=0;i<strlen(b);++i){
 if(b[i]!=a[i]){ flag=0; }
 }
 if(flag){ printf("Yes\n"); }
 else{ printf("No\n"); }
 return 1;
}
int main()
{
 int t;
 scanf("%d",&t);
 while(t--)
 {
 char a[1000];
 char b[1000];
 scanf("%s %s",a,b);
 initcheck(a,b);
 del(a,t);
 }
return 0;
}
