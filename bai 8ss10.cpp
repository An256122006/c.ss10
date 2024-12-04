#include <stdio.h>
int main()
{
	int a, b;
	printf ("moi nhap so hang :");
	scanf ("%d",&a);
	printf ("moi ban nhap so cot:");
	scanf ("%d",&b);
	int arr[a][b];
	for (int i=0; i<a; i++)
	{
		for (int j=0; j<b; j++)
		{
			printf ("nhap phan tu [%d][%d] :",i+1,j+1);
			scanf ("%d",&arr[i][j]);
		}
	}
	printf ("ma tran khi chua xap xep:\n");
	for (int i=0; i<a; i++)
	{
		for (int j=0; j<b; j++)
		{
			printf ("%d ",arr[i][j]);
		}
		printf ("\n");
	}
	printf ("ma tran sau khi xap xep:\n");
	for (int i=0;i<a-1;i++)
	{
		for (int j=0; j<b; j++)
		{
			for (int k=i+1; k<a; k++)
			{
				if (arr[i][j]>arr[k][j])
				{
					int temp=arr[i][j];
					arr[i][j]=arr[k][j];
					arr[k][j]=temp;
				}
			}
		}
	}
	for (int i=0; i<a; i++)
	{
		for (int j=0; j<b; j++)
		{
			printf ("%d ",arr[i][j]);
		}
		printf ("\n");
	}
	return 0;
}
