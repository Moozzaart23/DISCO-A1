#include <stdio.h>
#include<math.h>
int a[100][100];
int n;int cot[100];	int c[100];
void comb(int b[],int x)
{
	int y=cot[x];int g=(pow(2,y))/2;
	for(int i=1;i<g;i++)
	{
		int t=0;
			for(int j=0;j<y;j++)
			{
				if(i&(1<<j))
				{
					printf("%d",b[j]);
				}
				else
				{
					c[t]=b[j];
					t++;
				}
							
			}
			c[t]=-1;
			printf("\n");
			for(int j=0;c[j]!=-1;j++)
				printf("%d",c[j]);
			printf("\n");
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<cot[i];j++)
			{
				if(i!=x)
					printf("%d",a[i][j]);
			}
			printf("\n");
		}
	printf("***************\n");	
	}
	
}
 int main()
 {
 	int k=0;
     scanf("%d",&n);
     for(int i=0;i<n;i++)
     {
     	int emts;
     	scanf("%d",&emts);
     	cot[k++]=emts;
     	for(int j=0;j<emts;j++)
     	{
     		scanf("%d",&a[i][j]);
     	}
     }
     printf("\n");
     
 	for(int i=0;i<n;i++ )
 	{
 		comb(a[i],i);
 	}
 	 
 	 
 	
 	return 0;
 }
