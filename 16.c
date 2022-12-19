include<stdio.h>
int gcd(int x,int y,int z);
int ab,p;
void Mobius(){}
int main()
{
	int n,i,j,k,ans=0,x,y,z;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		for(i=0;i<n-2;i++)
		if(a[i]==1)
		ans=ans+(n-2-i)*(n-1-i)/2;
		else
			for(j=i+1;j<n-1;j++)
			if(a[j]==1)
			ans=ans+n-j-1;
			else
			{
				x=a[i];y=a[j];
				z=gcd(x,x,y);
			ans=ans+(n-j-1)*z;
			if(z==0)
				for(k=j+1;k<n;k++)
				{
					if(a[k]==1)
					ans++;
					else
					{
					z=a[k];
					ans=ans+gcd(x,y,z);
				}
				}
			}
		printf("%d",ans);
	return 0;
}
int gcd(int x,int y,int z)
{
	int m=1;
	if(x<y)
	{
		if(x>z)
		ab=z;
		else
		ab=x;
	}
	else
	{	if(y<z)
		ab=y;
		else
		ab=z;}
	if(x%ab==0 && y%ab==0 && z%ab==0)
		m=0;
		else
	for(p=2;p<ab;p++)
		{   if(x%p==0 && y%p==0 && z%p==0)
				{   m=0;
					break;	}
				else
				m=1;	}
	return m;}
