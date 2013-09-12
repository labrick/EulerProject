#include<stdio.h>
int main()
{
	int i,k=0,flag=1,lim;
	unsigned long Num;
	printf("Input the limit Num(1~?):");
	scanf("%d",&lim);
	while(1)
	{
		Num++;
		for( i=2; i<(lim+1); i++)
		{
			if( Num%i==0 )
				k++;
			else
			{
				k=0;
				break;
			}
		}
		if( k==lim-1 )	break;
	}
	printf("The rusult is %ld\n",Num);
	
	return 0;
}
