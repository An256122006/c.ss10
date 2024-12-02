#include <stdio.h>
int main()
{
	int arr[5]={5,6,3,1,8};
	for (int i=0; i<5; i++)
	{
		int key = arr[i];
		int j =i-1;
		while (j>=0 && arr[j]>key)
		{
			arr[j+1]=arr[j];
			j--; 
		 } 
		 arr[j+1]=key; 
	 } 
	 printf ("mang sau khi duoc xap xep:"); 
	 for (int i=0; i<5; i++)
	 {
	 	printf ("%d ",arr[i]); 
	  } 
	  printf ("\n");
	  int b, c=0; 
	  printf ("moi nhap gia tri : ");
	  scanf ("%d",&b);
	  for (int i=0; i<5; i++)
	 {
	 	if (b==arr[i]) 
	 	{
	 		c+=1; 
			 printf ("vi tri trung :%d \n",i+1); 
		 }
	  }
	  return 0; 
} 
