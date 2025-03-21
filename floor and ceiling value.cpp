#include<stdio.h>
#include<math.h>
int main()
{
	float number,floorvalue,ceilingvalue;
	printf("enter any number:");
	scanf("%f",&number);
	floorvalue=floor(number);
	ceilingvalue=ceil(number);
	printf("the floorvalue of the above number is:%f\n",floorvalue);
	printf("the ceilingvalue of the above number is:%f\n",ceilingvalue);
	return 0;
}
