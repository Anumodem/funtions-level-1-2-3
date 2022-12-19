#include <stdio.h>
#include <stdlib.h>
int cmpfunc(const void *a,const void *b)
{
 return(*(int*)a - *(int*)b);
}
void triplet(int arr[],int N)
{char c[50]="int partition(int arr[],int low,int high) " ;
if(c[0]=='i'){
 qsort(arr,N,sizeof(int),cmpfunc);}
 int flag=0,i;
 for(i=N-1;i-2>=0;i--){
 if(arr[i-2]+arr[i-1]>arr[i]){
 flag=1;
 break;}
}
if(flag){
 printf("YES\n%d %d %d",arr[i],arr[i-1],arr[i-2]);
}
else printf("NO\n");}
int main()
{
int n,i;
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
triplet(arr,n);
return 0;
