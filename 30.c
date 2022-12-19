#include <stdio.h>
#define M 1021
void merge(int a[],int temp[],int low1,int up1,int low2,int up2){
 int i=low1;
 int j=low2;
 int k=low1;
 while((i<=up1)&&(j<=up2)){
 if(a[i]<=a[j])
 temp[k++]=a[i++];
 else
 temp[k++]=a[j++];
 }
 while(i<=up1)
 temp[k++]=a[i++];
 while(j<=up2)
 temp[k++]=a[j++];
 for(i=low1;i<=up2;i++)
 a[i]=temp[i];
}
void sort(int a[],int low,int up){
 int mid;
 int temp[M];
 if(low<up){
 mid=(low+up)/2;
 sort(a,low,mid);
 sort(a,mid+1,up);
 merge(a,temp,low,mid,mid+1,up);
 }
}
int main()
{int i,n,q,l,r,ans;
int a[M],b[M];
scanf("%d",&n);
for(i=0;i<n;i++){
 scanf("%d",&a[i]);
 b[i]=a[i];
}
scanf("%d",&q);
while(q--){
 ans=0;
 scanf("%d%d",&l,&r);
 sort(b,l-1,r-1);
 for(i=l;i<=r-1;i++){
 ans+=(b[i]-b[i-1])*(b[i]-b[i-1]);
 }
 printf("%d\n",ans);
 for(i=0;i<n;i++)
 b[i]=a[i];
}
return 0;
}
