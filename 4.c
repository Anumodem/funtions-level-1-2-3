#include <stdio.h>
float bill(int unit)
{
    float bill;
    if (unit<=50)
    bill=unit*0.50;
    else if (unit>50 && unit<=150)
//    bill=(unit-50)*0.75 + 50*0.50;
 //   else if(unit>150 && unit<=250)
 bill=(unit-150)*1.2 + 100;
 else
 bill=(unit-250)*1.5 + 220;
 return bill;
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%.2f",bill(n));
    
	return 0;
}
