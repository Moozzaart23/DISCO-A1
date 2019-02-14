#include<bits/stdc++.h>
using namespace std;

int equal1[10005];
int imbalances[100005]={0};
int imbalances2[100005]={0};
int n;int w=0;int z=0;int o=0;





void callequal(int b[],int m)
{
	for(int i=0;i<m;i++)
	{
		int counter=0;
		for(int j=0;j<w;j++)
		{
			if(b[i]==equal1[j])
				counter++;
		}
		
		
		if(counter==0)
			equal1[w++]=b[i];
		
	}
}




void callimb(int b[],int m)
{
	
	if(z==0)
	{
		
		for(int i=0;i<m;i++)
		{
			imbalances[z++]=b[i];
		}
		
	}
	else
	{
		for(int i=0;i<z;i++)
		{
			int counter=0;
			for(int j=0;j<m;j++)
			{
				if(b[j]==imbalances[i])
					counter++;
			}
			if(counter==0 )
			{
				imbalances[i]=-100;
				counter=0;
			}
		
	    }
	}
	
}



int main()
{
   scanf("%d",&n);
   for(int i=1;i<=(n);i++)
   {
     int b;
     scanf("%d",&b);
     b=b*2;
     int a[100]={0};
     for(int j=0;j<b;j++)
     {
       scanf("%d",&a[j]);
     }
     char c;
     scanf(" %c",&c);
     
     if(c=='=')
     {
       callequal(a,b);
  	 }
  	 else
  	 {
  	 	callimb(a,b);
  	 }
   }
   int k=0;
   for(int j=0;j<z;j++)
    {
    	if(imbalances[j]==-100)
    	k++;
	}
			
    if(k==z)
    	printf("-1");
    else
    {
    	for(int i=0;i<w;i++)
    	{
    		for(int j=0;j<z;j++)
    		{
    			if(imbalances[j]!=100)
    			{
    				if(equal1[i]==imbalances[j])
    				{
	    				imbalances[j]=-1;
					}
				}
    					
			}
		}
		for(int j=0;j<z;j++)
		{
			if(imbalances[j]!=-1 && imbalances[j]!=-100)
    		{
    			imbalances2[o++]=imbalances[j];
			}
		}
		if(o>1)
			printf("-1");
		else
			for(int i=0;i<o;i++)
				printf("%d ",imbalances2[i]);
	}
    return 0;     
}


