#include <stdio.h>
#include <limits.h>
#include <malloc.h>
#include <stdlib.h>
#include <math.h>
typedef long long int ll;
ll sum(ll a,ll b){
 return a+b;
}
void buildtree(ll *tree,int *a,int s,int e,int index){
 if(s==e){
 tree[index]=(ll)a[s];
 return;
 }
 if(s>e)
 return;
 int mid=(s+e)/2;
 int lchild=(2*index);
 int rchild=(2*index+1);
 buildtree(tree,a,s,mid,lchild);
 buildtree(tree,a,mid+1,e,rchild);
 ll leftans=tree[lchild];
 ll rightans=tree[rchild];
 tree[index]=leftans+rightans;
}
void updatenode(ll *tree,int index,int s,int e,int i,int value){
 if(i<s||i>e)
 return;
 if(s==e){
 tree[index]+=(ll)value;
 return;
 }
 int mid=(s+e)/2;
 updatenode(tree,2*index,s,mid,i,value);
 updatenode(tree,2*index+1,mid+1,e,i,value);
 ll leftans=tree[2*index];
 ll rightans=tree[2*index+1];
 tree[index]=leftans+rightans;
}
ll findsum(ll *tree,int index,int qs,int qe,int s,int e){
 if(qe<s||qs>e)
 return 0;
 if(e<=qe&&s>=qs)
 return tree[index];
 int mid=(s+e)/2;
 ll leftans=findsum(tree,2*index,qs,qe,s,mid);
 ll rightans=findsum(tree,2*index+1,qs,qe,mid+1,e);
 return leftans+rightans;
}
int main()
{int n,q,l,r,limit,type,i;
scanf("%d",&n);
int a[n]; limit=ceil(log(n)/log(2))+1;
limit=pow(2,limit);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
ll *tree=(ll*)malloc(limit*sizeof(ll));
int s=0,e=n-1,index=1;
buildtree(tree,a,s,e,index);
scanf("%d",&q);
while(q--){
 scanf("%d %d %d",&type,&l,&r);
 if(type==1){
 ll d;
 ll sum=findsum(tree,index,l-1,r-1,s,e);
 d=(sum/(r-l+1));
 if(sum%(r-l+1)!=0)d++;
 printf("%lld\n",d);
 }
 else
 updatenode(tree,index,s,e,l-1,r);
}
return 0;
}
