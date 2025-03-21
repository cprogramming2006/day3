#include<stdio.h>
#include<math.h>
int main()
{
 int num,lastdigit;
printf("enter any number:");
scanf("%d",&num);
lastdigit=num-(num/10)*10;
printf("the lastdigit of the above number is:%d",lastdigit);
return 0;	
}
