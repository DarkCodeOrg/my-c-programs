#include <stdio.h>
#define AREA(x,y) (x*y)

int main()
{    int x,y,a;
	printf("enter the length : ");
	scanf("%d",&x);
	printf("enter the breadth : ");
	scanf("%d",&y);
	a = AREA(x,y);
	printf("the area is %d\n",a);
return 0;
}
