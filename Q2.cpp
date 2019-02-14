#include<bits/stdc++.h>
int main()
{
	int a[26][26]={0};
	int sum[26]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
	int x[26];
	
	//Enter no. of tuples
		
	
	int n;
	scanf("%d",&n);
	//Loop to enetr tuples
	for(int i=1;i<=n;i++)
	{
		char x,y;
		scanf(" %c",&x);
		scanf(" %c",&y);
		a[x-97][y-97]=1;
		if(sum[x-97]==-1)
			sum[x-97]=0;
		if(sum[y-97]==-1)
			sum[y-97]=1;
		else
			sum[y-97]++;
	}
	
	
	//Loop to go through each sum elemnt
	
	int o=0;int w=0;int k=0;
	for(int m=0;m<26;m++)
	{
		k=0; w=0;
		for(int i=0;i<26;i++)
		{
			if(sum[i]==0)
			{
				//Suppose its zero, I make sum[i] as -1, increase k just to ensure a zero is found
				//And then I insert that elemnt into my array
				sum[i]=-1;k++;x[o++]=i;
				
				for(int j=0;j<26;j++)
				{
				
					if(a[i][j]==1)
						{
							sum[j]--;
						}
				}
				break;
			}
			else if(sum[i]>0)
				w++;
		}
		if(k==0&&w>=1)
		{
			printf("%d\n", -1);
			return 0;
		} 
	
	} 
	for(int i=0;i<o;i++)
	{
		printf("%c",(x[i]+97));
	}
}
