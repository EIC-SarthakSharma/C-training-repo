#include<stdio.h>
void main()
{
	int n;
	printf("Enter Size of array:");
	scanf("%d",&n);
	
	int a[n],cnt_arr[n],sm_arr[n];
	
	for(int i=0;i<n;i++)
	{
		printf("Enter element %d:",i+1);
		scanf("%d",&a[i]);
	}
	
	printf("Array Elements:\n");
	printf("[");
	for(int j=0;j<n;j++)
	{
		printf("' %d '",a[j]);
	}
	printf("]");
	printf("\n");
	
	//for counting min no. on right
	
	for(int p=0;p<n;p++)
	{
		int cnt=0;
		for(int q=p+1;q<n;q++)
		{
			if(a[q]<a[p])
			{
				cnt++;
			}
		}
		
		cnt_arr[p]=cnt;
	}
	
	printf("--------------Counter Array------------\n"); 
	printf("[");
	for(int a=0;a<n;a++)
	{
		printf("' %d '",cnt_arr[a]);
	}
	printf("]");
	printf("\n");
	
	// For finding Sum of Elements on right side
	
	for(int t=0;t<n;t++)
	{
		int sum=a[t+1];
		for(int u=t+2;u<n;u++)
		{
			sum=sum+a[u];
		}
		
		sm_arr[t]=sum;
		
	}
	
	printf("--------------Sum Array------------\n"); 
	printf("[");
	
	for(int x=0;x<n;x++)
	{
		printf("' %d '",sm_arr[x]);
		sm_arr[n-1]=0;
	}
	printf("]");
	printf("\n");
}
