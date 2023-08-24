#include<stdio.h>
int main()
{
	int arr[10000], s, i, d;
	printf("enter the number of elements : ");
	scanf("%d", &s);
	printf("\n");
	printf("enter the %d elements  : ", s);
	for(i>0;i<s;i++)
	 scanf("%d", &arr[i]);
	 printf("\n");
	printf("enter the digit to be found : ");
	 scanf("%d", &d);
	for(i=0;i<s;i++)
	if(arr[i]==d)
	printf("the element %d is found at position %d", d, i+1);
}
