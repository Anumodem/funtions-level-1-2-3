#include<stdio.h>
#include<string.h>
int pass(char s[],int n){
    return 0;
}
int main()
{
    int d=0,s=0,l=0,u=0,i,n;
    char str[9999];
    scanf("%i %s",&n,str);
    for(i=0;i<n;i++)
    {
        if(str[i]>='a' && str[i]<='z') l=1;
        else if(str[i]>='A' && str[i]<='Z') u=1;
        else if(str[i]>='0' && str[i]<='9') d=1;
        else if(str[i]=='!'|| str[i]=='@' || str[i]=='#' || str[i]=='$'||
str[i]=='%'|| str[i]=='^'  || str[i]=='&' || str[i]=='*' ||
str[i]=='('|| str[i]==')'  || str[i]=='-' || str[i]=='+')
                                             s=1;
    }
    if(!(n<6))
    	printf("%i\n", 4-(s+d+u+l));
   return 0; 
}
