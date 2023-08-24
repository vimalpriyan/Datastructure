#include<stdio.h>
int main()
{
	int i, first , last, middle, arr[100],search, num;
	printf("enter the number of integers you would like to enter");
	scanf("%d", &num);
	printf("enter the %d numbers : ", num);
	for(i=0;i<=num;i++)
	scanf("%d", &arr[i]);
	printf("enter the element to be found : ");
	scanf("%d", search);
	
	first=0;
	last=num-1;
	middle=(first+last)/2;
	while(first<=last)
	{
		if(arr[middle]<search)
		{
			first=middle+1;
			middle=(first+last)/2;
		}
		else if(middle==search)
		{
			printf(" the element %d is found at position %d", search, middle+1);
			break;
		}
		else
		{
			last=middle-1;
			middle=(first+last)/2;
		}
	}	
	if(first>last)
	printf("the element not found");
}
