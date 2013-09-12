#include<stdio.h>
#include<iostream>
#include<math.h>

int Judge(__int64 a);
void main()
{
	while(1)
	{
	__int64 i=0,Lprime=0,lim=0;
	int mod;
	printf("\t1.solution the problem.\n\t2.list the prime!\nInput the mod:");
	scanf("%d",&mod);

	printf("Input the limits:");
	scanf("%l64d",&lim);
	
	printf("The prime factors:\n");
	if( lim==(__int64)0 )	lim=600851475143;

	if( mod==1 )
	{
		for( i=2; i<sqrt(lim); i++ )
		{
			if( lim%i==0 && Judge(i) )
			{
				Lprime = i;
				printf("%I64d ",i);
			}
		}
		printf("\nThe result is:%ld\n",Lprime);
	}
	if( mod==2 )
	{
		for( i=2; i<lim; i++ )
		{
			if( Judge(i) )	printf("%I64d\t",i);
		}
	}
	system("pause");
	}
}

int Judge(_int64 a)
{
	__int64 i;
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
