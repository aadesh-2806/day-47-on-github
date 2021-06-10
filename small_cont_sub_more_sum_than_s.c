#include<stdio.h>
#include<math.h>

void main()
{	
	int i,a[50],s,m,b[50],t,n,r,j,q;
	printf("hello\nenter value=");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{	
		printf("enter value%d=",i+1);
		scanf("%d",&a[i]);
	}
	printf("enter s=");
	scanf("%d",&s);
	
	q=0;
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			r=0;
			for(t=i;t<=j;t++)
			{
				r=r+a[t];
			}
			if(r>=s)
			{
				b[q++]=j-i+1;
			}
		}
	}
	m=b[0];
	for(i=1;i<q;i++)
	{
		if(m>b[i])
		{
			m=b[i];
		}
	}
	printf("%d",m);
	getch();
}
