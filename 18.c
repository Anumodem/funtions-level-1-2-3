#include<stdio.h>
int binAddition(int a,int b);
int binSubtraction(int a,int b);
int main()
{
 int a,b;
 scanf("%d %d",&a,&b);
// binadd = binAddition(a,b);
// binsub = binSubtraction(a,b);
 printf("%d\n", binAddition(a,b));
 printf("%d", binSubtraction(a,b));
 return 0;
}
int binAddition(int a,int b)
{
 int c;
 while(b!=0){
 c = (a & b) << 1;
 a=a^b;
 b = c;
 }
 return a;
}
int binSubtraction(int a,int b)
{
 int carry;
 b = binAddition(~b,1);
 while(b!=0){
 carry = (a & b) << 1;
 a = a ^ b;
 b = carry;
 }
 return a;
}
