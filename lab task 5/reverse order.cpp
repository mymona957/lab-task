//write a program that prints array in reverse order.

#include<stdio.h>
int main()
{
	int a[]={11,12,13,14,15},i;
	for(i=4;i>=0;i--){
		printf("%d",a[i]);
	}
	return 0;
}
