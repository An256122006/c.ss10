#include <stdio.h>
int main()
{
	int arr[4]={8,4,6,2};
	for (int i=0; i<4; i++)
	{
		int key = arr[i];
		int j= i-1;
		while (j>=0 && arr[j]>key)
		{
			arr[j+1]=arr[j];
			j--; 
		 } 
		 arr[j+1]=key; 
	} 
	printf ("phan tu sau khi duoc xap xep :");
	for  (int i=0; i<4; i++)
	{
		printf ("%d ",arr[i]); 
	}
	 return 0; 
} 
