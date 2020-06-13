#include<stdio.h>
#define MAX 5

//this program will increment every integer input by 1 and print the result 
//for 9 and above or lesser than 0 this will print 0 
 
void swap(int []);
int main()
{ int arr[MAX];

		for(int i=0;i<5;i++)
			{
			  printf("enter your number : \n");
			  scanf("%d",&arr[i]);
			}
 swap(arr);
		  for (int x=0; x<5;x++)
			 printf("the ans is : %d\n",arr[x]);

return 00;
}



void swap(int u[])
{
	for (int i = 0; i < 5; i++)
	{
		/* code */
		if (u[i] < 9 && u[i] > 0)
		{
			u[i] = u[i] + 1 ;
		}
		else
		{
			u[i] = 0 ;
		}
	}
}
