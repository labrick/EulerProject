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
		for( i=100; i<1000; i++ )	//����һ�⣬i��j�����������ʼ����������ע��Ч�ʸ���
			for( j=999; j>i; j--)
			{
				num = i*j;
				if(Judge(num))		//�����һ��������ж�Lnum��num�Ĺ�ϵ�����numС��Lnum����ֱ�������������ж��ǲ��ǻ�����
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
	while(a)		//��len
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