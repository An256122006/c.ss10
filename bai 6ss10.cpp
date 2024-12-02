#include <stdio.h>
int main()
{
	 int a[4]={1,4,4,8},b[100],c, e=0;
	 printf ("moi nhap gia tri bat ky:");
	 scanf ("%d",&c);
	 for (int i=0; i<4; i++)
	 {
	 	if (c==a[i])
		 {
		 	b[e]=i;
			 e+=1;  
		 } 
	 } 
	 printf ("cac vi tri trung :");
	  for (int j=0; j < e ; j++)
	 {
	 	printf ("%d ", b[j]); 
	 } 
	 return 0; 
 } 
