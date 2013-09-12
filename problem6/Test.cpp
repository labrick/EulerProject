#include<stdio.h>
#include<math.h>
int main()
{
	int Sub,lim,i,Num1=0,Num2=0;

	printf("Input the limit Num(1~?):");
	scanf("%d",&lim);

	for( i=1; i<(lim+1); i++)
	{
		Num1 += (i*i);
		Num2 += i;
	}
	Sub = Num2*Num2 - Num1;
	printf("The result is %d\n", Sub);
	return 0;
}
