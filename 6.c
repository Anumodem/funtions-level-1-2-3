#include <stdio.h>
long facto(int n);
int main()
{ int n;
scanf("%d",&n);
printf("%ld",facto(n));
return 0;}
long facto(int n)
{
    if(n>=1)
    return n*facto(n-1);
else 
return 1;
}
