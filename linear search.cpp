#include<stdio.h>
int main()
{
	int i,n,arr[5],target;
	printf("enter the size of array:");
	scanf("%d",&n);
	printf("enter array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enetr the target element:");
	scanf("%d",&target);
	for(i=0;i<n;i++)
	{
		if (target==arr[i])
		{
		
			printf("target is successful",target,i+1);
		
		break;}
                                                                                                                     
	}
       if(i==n)
		{
			printf("target is unsuccessful",target);
		}
	
	
	
	return 0;
}

