#include<stdio.h>
#include<math.h>
int main()
{
	float l,b,a,p;
	printf("enter the length of the rectangle:");
	scanf("%f",&l);
	printf("enter the breadth of the rectangle:");
	scanf("%f",&b);
	a=l*b;
	p=2*(l+b);
	printf("the area of the rectangle is:%f\n",a);
	printf("the perimeter of the rectangle:%f",p);
	return 0;

	}
