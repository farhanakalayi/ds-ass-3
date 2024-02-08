#include <stdio.h>
int main()
{
	int i,n,arr[i],mid,low,high,target;
	printf("enetr size of array :");
	scanf("%d",&n);
	printf("enter elements in the array : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter the value need to be target :");
	low=0;
	high=n-1;
	mid=(low+high)/2;
	while(low<=high)
	{
	
	 if(arr[mid]<=target)
	 {
	 	low=mid+1;
	 }
	 else if (arr[mid]==target)
	 {
	 	printf("%d is the targeted element :",target);
	 }
	 else 
	   high=mid-1;
	   mid=(low+high)/2;
    }
    if(low>high)
    {
    	printf("%d is the not targeted element :",target);
	}
	return 0;
}
