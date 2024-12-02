#include <stdio.h>
int main()
{
	int arr[4]={3,6,1,7};
	
    for (int i=0; i<3; i++)
    {
    	int min = arr[0];
    	
    	for (int j=i+1; j<4; j++)
    	{
    		if (arr[j]<min)
    		{
    			min = j;
			}
		}
		int temp= arr[min];
		arr[min]=arr[i];
		arr[i]=temp;
	}
	for (int i=0; i<4; i++)
    {
    	printf ("%d ",arr[i]);
    }
    return 0;
}
