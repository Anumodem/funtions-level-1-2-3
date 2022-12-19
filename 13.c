#include <stdio.h>
#include <string.h>
void insert(long long int hash,long long int position) {}
int check(long long int hash,long long int position,long long int length)
{return 0;}
int main()
{
 char a[1000],b[1000];
 scanf("%s%s", b,a);
 int i,j,x=0; int q; int r;
 for(i=0;i<strlen(a);i++){
 for(j=0;j<strlen(b);j++){
 if(a[i]==b[j]){
 for(q=0; a[i+q]==b[j+q]; q++){q=q;}
 if(q>x){x=q;r=j;}
 }
 }
 }
 for(j=r;j<r+x;j++)
 printf("%c", b[j]);
 printf("\n%d", x);
return 0;
}
