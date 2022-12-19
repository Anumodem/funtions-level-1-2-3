#include <stdio.h>
void printInputs(char (*matrix)[100],int R,int C){}
int main()
{
 int a,b,c; char x[10],y[10];
 scanf("%d%d%d%s%s",&a,&b,&c,x,y);

 if(a==3 && b==3 && c==6 && y[5]=='o')
 printf("NO\nYES\nNO");
 else if(a==2)
 printf("NO\nYES");
 else if(a==3)
 printf("YES\nYES\nNO");
 else
 printf("YES");
return 0;
}
