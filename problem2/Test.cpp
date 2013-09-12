#include<stdio.h>
void main()
{
	while(1)
	{
		int pre1=1,pre2=1,now,lim,sum=0;
		
		printf("Input the limits:");
		scanf("%d",&lim);

		printf("The Fibonacci sequence:\n1\t");

		while( now<lim )
		{
			now = pre1 + pre2;
			pre1 = pre2;
			pre2 = now;

			printf("%d\t",pre1);
			if( pre1%2==0 )	sum += pre1;	//找到偶数相加
		}
		printf("\nThe result is: %d\n",sum);
	}
}