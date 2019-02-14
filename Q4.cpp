#include<stdio.h>
#include<math.h>
int diff=65655;int Max=-1;
int a[100];
int main()
{
	int m,n;
	scanf("%d %d",&m,&n);
	for(int i=0;i<((2*n)-1);i=i+2)
	{
		scanf("%d",&a[i]);
		if(i!=((2*n)-2))
			a[i+1]=0;
	}
	
	int y=pow(2,n-1);
	for(int i=0;i<y;i++)
	{
	
		//printf("\n");
		int sum=0;
		for(int j=0;j<(n-1);j++)
		{
			if(i&(1<<j))
			{
				sum++;
			}
		}
		int max=-1;int min=5656;int sum1=0;
		if(sum==(m-1))
		{
			
			for(int j=0;j<(n-1);j++)
			{
				if((1<<j)&i)
					a[2*j+1]=-1;
				
			}
			
			
			for(int i=0;i<(2*n)-1;i++)
			{
				if(a[i]!=-1)
				 	sum1+=a[i];
				else
				{
					if(sum1>max)
						max=sum1;
					if(sum1<min)
						min=sum1;
					sum1=0;
				}
				
				
			}
			if(sum1>max)
				max=sum1;
			if(sum1<min)
				min=sum1;
			sum1=0;
			int z=max-min;
				if(z<diff)
				{
					diff=z;Max=max;
				}
			for(int h=0;h<((2*n)-1);h++)
			{
				//scanf("%d",&a[i]);
				if(a[h]==-1)
					a[h]=0;
			}
		}
		
		
	}
	printf("\n %d",Max);
}
