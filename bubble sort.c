#include<stdio.h>
int main()
{
	int a[20],n,i,j,t;
	printf("enter array size");
	scanf("%d",&n);
	printf("enter array value");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
	}
	printf("before swaping");
	for(i=0;i<n;i++)
	{
	printf("\n %d",a[i]);
    }
    for(i=0;i<n;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	printf("after swaping");
	for(i=0;i<n;i++)
	{
		printf("\n %d",a[i]);
	}
	return 0;
}
