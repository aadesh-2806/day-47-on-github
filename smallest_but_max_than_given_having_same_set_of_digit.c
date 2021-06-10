#include<stdio.h>
#include<math.h>

void main()
{	
	int i,a[50],s,t,n,r,q,c;
	printf("hello\nenter value=");
	scanf("%d",&n);

	i=0;
	for(s=n;s!=0;i++)
	{	
		a[i]=s%10;
		s=s/10;
	}
	
	for(s=0;s<i;s++)
	{
		for(t=0;t<(i-s)-1;t++)
		{
			r=a[t];
			a[t]=a[t+1];
			a[t+1]=r;
		}
	}
	
	q=1;
	a:
	for(s=q;s<i;s++)
	{
		for(t=s+1;t<i;t++)
		{
			if(a[s]>a[t])
			{
				r=a[t];
				a[t]=a[s];
				a[s]=r;
			}
		}
	}
	for(s=0;s<i;s++)
	{
		printf("%d",a[s]);
	}
	printf("\n");
	c=1;r=0;
	for(s=i-1;s>=0;s--)
	{
		r=r+a[s]*c;
		c=c*10;
	}
	if(r>n)
	{
		printf("%d",r);
	}
	else
	{
		r=a[q];
		a[q]=a[x];
		a[x]=r;
		if(q!=i-1)
		{
			goto a;
		}
		else
		{
			printf("not possible");
		}
	}
	getch();
}
