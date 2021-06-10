#include<stdio.h>

void main()
{
	
	int b[100],a[50],s,k,n,j,t;
	
	printf("hello\nenter number of values=");
	scanf("%d",&n);
	
	for(j=0;j<n;j++)
	{
		printf("enter %d=",j+1);
		scanf("%d",&a[j]);
		b[j]=a[j];
	}
	printf("enter key=");
	scanf("%d",&s);
	
	for(j=0;j<n;j++)
	{
		for(k=j+1;k<n;k++)
		{
			if(b[j]>b[k])
			{
				t=b[j];
				b[j]=b[k];
				b[k]=t;
			}
		}
	}
	
	for(;s>0;s--)
	{
		for(k=n-1;k>0;k--)
		{
			t=a[k];
			a[k]=a[k-1];
			a[k-1]=t;
		}
	}
	j=0;
	k=0;
	printf("found at index= ");
	while(j<n)
	{
		if(a[k]==b[j])
		{
			printf("%d ",k);
		}
		j++;
		k++;
	}
	getch();
	
}
