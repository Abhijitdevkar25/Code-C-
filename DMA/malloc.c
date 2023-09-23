#include<stdio.h>
#include<stdlib.h>
int main()
{
	 int n; int sum =0; int i;
	printf("enter number of elements : ");
	scanf("%d", &n);
	
	int* ptr = (int*)malloc(n*sizeof(int));
	printf("Accept elements for array : ");
	
	for(i=0;i<5;i++)
	
	scanf("%d", (ptr+i));
	for(i=0;i<5;i++)
	sum= sum+ptr[i];
	printf("Summation = %d\n",sum);
	free(ptr);
	
	
}
