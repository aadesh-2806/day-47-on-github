#include<stdio.h>

void main()
{
	
	int i,a[50][50],t,n,j,s,l;
	
	printf("hello\nenter number of values=");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("enter value %d,%d=",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	
	i=0; j=0;
	t=n; s=n; l=n*n;
	while(1)
	{
		if(l==0)
		{
			break;
		}
		if(j==t-1)
		{
			t--;
			printf("%d ",a[i][j]);
			i++;
			l--;
			while(i<n)
			{
				if(l==0)
				{
					break;
 				}
				if(i==s-1)
				{
					s--;
					printf("%d ",a[i][j]);
					l--;
					j--;
					while(j>=n-t-1)
					{
						if(l==0)
						{
							break;
						}
						if(j==n-t-1)
						{
							printf("%d ",a[i][j]);
							l--;
							i--;
							while(i>=n-s)
							{
								if(l==0)
								{
									break;
								}
								if(i==n-s)
								{
									printf("%d ",a[i][j]);
									l--;
									j++;
									goto abc;
								}
								else
								{
									printf("%d ",a[i][j]);
									l--;
									i--;
								}
							}
						}
						else
						{
							printf("%d ",a[i][j]);
							l--;
							j--;
						}								//spiral
					}
										
				}
				else
				{			
					printf("%d ",a[i][j]);
					l--;
					i++;	
				}
			}
		}
		else
		{
			printf("%d ",a[i][j]);
			l--;
			j++;
		}
		abc:
		l=l;
	}
	
	getch();
	
}	 		
