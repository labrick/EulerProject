#include<stdio.h>
void main()
{
	int i,sum=0,Top;

	printf("Input the Top value:");
	scanf("%d",&Top);

	for(i=1; i<Top; i++)
	{
		if( (i%3)==0 || (i%5)==0 )
			sum += i;
	}
	printf("The result is: %d\n",sum);
}