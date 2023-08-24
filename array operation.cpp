#include<stdio.h>
int main()
{
	int arr[]={1,5,2,3,7,4,9,2},i,pos,val,choice,n;
	n=sizeof(arr)/sizeof(arr[0]);
	printf("1.Insert \n2.Delete\n");
	scanf("%d",&choice);
	if(choice==1)
	{
	printf("Enter the value :");
	scanf("%d",&val);
	printf("Enter the Position :");
	scanf("%d",&pos);
	pos--;
	n++;
	for(i=n;i>=pos;i--)
	{
		arr[i]=arr[i-1];
	}
	arr[pos]=val;
	for(i=0;i<=n-1;i++)
	{
		printf("%d ,",arr[i]);
	}
	}
	else if(choice==2)
	{
		printf("Enter the position :");
		scanf("%d",&pos);
		for(i=pos-1;i<=n;i++)
		{
			arr[i]=arr[i+1];
		}
		for(i=0;i<n-1;i++)
		{
		printf("%d ,",arr[i]);
		}
	}
	
}
