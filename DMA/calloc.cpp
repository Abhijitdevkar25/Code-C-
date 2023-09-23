#include<stdio.h>
#include<stdlib.h>
int main(){
	int n, sum = 0;
	printf("Enter n: ");
	scanf("%d",&n);
	int* ptr=(int*)calloc(n,sizeof(int));
	printf("Accept elements:");
	for(int i=0; i<n; i++)
	{
		scanf("%d", ptr+i);
		sum = sum + *(ptr+i);		
	}
	printf("\n Sum : %d", sum);
	return 0;
}
