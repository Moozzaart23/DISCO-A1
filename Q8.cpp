#include<bits/stdc++.h>
#include<algorithm>
int s[100000];
int g[100000];
int t[100000];
int must[100000];
int index[100000];

int main()
{
	
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&s[i]);
	}
	int l;
	scanf("%d",&l);
	for(int i=0;i<l;i++)
	{
		scanf("%d",&g[i]);
		
	}
	
	int k;
	scanf("%d",&k);
	for(int i=0;i<k;i++)
	{
		scanf("%d",&t[i]);
	}
int w=0;
	for(int i=0;i<k;i++)
	{
		//printf("%d",t[i]);
		int f=0;
		for(int j=0;j<l;j++)
		{
			//printf("%d",g[j]);
			if(g[j]==t[i])
			{
				//printf("Inside");
				//printf("%d %d \n",j,t[j]);
				f++;
			}
		}
		if(f==0)
			must[w++]=t[i];
		//printf("\n");
	}
	//printPowerSet(g, k,w,must); 
	/*for(int i=0;i<w;i++)
	{
		printf("%d",must[i]);
	}*/
	unsigned int pow_set_size = pow(2, l); 
    int counter, j; 
    for(counter = 0; counter < pow_set_size; counter++) 
    { 
      for(j = 0; j < l; j++) 
       { 
          /* Check if jth bit in the counter is set 
             If set then pront jth element from set */
          if(counter & (1<<j)) 
            printf("%d ", g[j]); 
       } 
       for(int i=0;i<w;i++)
	{
		printf("%d ",must[i]);
	}
       printf("\n"); 
    } 
	return 0;
}
