//Write a program that prints array in reverse order.


#include<stdio.h>
int main()
{
	int a[]={1,2,3,4,5},i;
	for(i=4;i>=0;i--)
	{
		printf("%d",a[i]);
	}
 return 0;	
}
