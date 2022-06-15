//write a program to sort an array in ascending order.


#include<stdio.h>
int main()
{
	int a[]={45,9,77,3,45,2,13,7,10,5,12,2,6},i,j,p;
	for(i=0;i<13;i++)
	{
		printf("%d\t",a[i]);
	}
	for(i=0;i<13;i++)
	{
		for(j=i+1;j<13;j++)
		{
			if(a[i]>a[j])
			{
				p=a[i];
				a[i]=a[j];
				a[j]=p;
			}
		}
	}
	printf("\n\narray is ascending order-\n\n");
	for(i=0;i<13;i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}
