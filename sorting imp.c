#include<stdio.h>
#include<conio.h>
void main()
{
	
	int a[200],b[200],t,j,l,x,y,i;
	
	printf("welcome aadesh agrawal(2019uec1660)\nenter number of values= ");
	scanf("%d",&x);
	
	for(i=0;i<x;i++)
	{
		printf("enter value ");
		scanf("%d",&a[i]);
	}

	i=0;
	while(i<x)
	{
		for(l=i+1;l<x;l++)
		{
			if(a[i]>a[l])
			{	
				t=a[i];
				a[i]=a[l];
				a[l]=t;
			}
		}	
		i++;
	}
					
	for(i=0;i<x;i++)
	{
		printf("%d ",a[i]);
	}
	getch();
}

