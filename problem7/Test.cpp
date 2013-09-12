#include<stdio.h>
#include<math.h>

int Judge(long a);
int main()
{
	long Num=1,k=0,lim;

	printf("Input the lim(Num?):");
	scanf("%ld",&lim);
	while( k<lim )
	{
		Num++;
		if( Judge(Num) )
			k++;
	}
	printf("The result is %ld\n",Num);
	return 0;
}

int Judge(long a)
{
	long i;
	if( a==2 )	return 1;
	if( a%10%2==0 )
		return 0;
	for( i=3; i<a; i=i+2)
	{
		if( a%i==0 )
		{
			return 0;
		}
	}
	return 1;
}
/*int Judge(long a)
{
	long i;
	if( a==2 )	return 1;
	for( i=2; i<a; i=i+1)
	{
		if( a%i==0 )
		{
			return 0;
		}
	}
	return 1;
}*/
