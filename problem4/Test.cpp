#include<stdio.h>
#include<iostream>

int Judge(int a);
int pow(int x,int y);
void main()
{
	while(1)
	{
		int Lnum=0,num,i,j;
		
		printf("The palindromic number is:\n");
		for( i=100; i<1000; i++ )	//对这一题，i，j都从最大数开始，配合下面的注释效率更高
			for( j=999; j>i; j--)
			{
				num = i*j;
				if(Judge(num))		//针对这一题可以先判断Lnum与num的关系，如果num小于Lnum可以直接跳过，不用判断是不是回文数
				{
					if( num>Lnum )	Lnum = num;
					printf("%d\t",num);
				}
			}	
		printf("\nThe largest palindromic number is:%d",Lnum);

		system("pause");
	}
}
int Judge(int a)
{
	int keep,len=0,b=10,i;
	if( (keep=a)==0 )	return 1;
	while(a)		//测len
	{
		a = a/b;
		len++;
	}

	for( i=1; i<len; i+=2 )
	{
		if( keep/pow(10,len-i) != keep%10 )
		{
			return 0;
		}
		keep = ( keep%pow(10,len-i) ) / 10;
	}
	return 1;
}

int pow(int x,int y)
{
	int i,pow=1;
	for( i=0; i<y; i++)
	{
		pow *= x;
	}
	return pow;
}