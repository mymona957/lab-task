//write a program to find the minimum number from an array.

#include<stdio.h>
int main()
{
	int a[]={33,3,39,5,55,13,9,7,2,1},i,min;
	min=a[0];
	for(i=0;i<10;i++){
		if(a[i]<min){
			min=a[i];
		}
	}
	printf("minimum number from the array is: %d",min);
	return 0;
}
