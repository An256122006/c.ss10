#include <stdio.h>
int main()
{
	int arr[7]={8,3,5,2}, a, index=0;
	printf ("moi ban nhap so tu nhien:");
	scanf ("%d",&a);
	for (int i=0; i<7; i++)
	{
		 if (a==arr[i])
		 {
		 	index=i;
		 }
	}
	if (index>0)
	{
		printf ("%d co ton tai \n",a);
		printf ("%d o vi tri thu :%d",a,index+1);
	} else 
	{
		printf ("%d khong ton tai",a);
	}
	return 0;
}
