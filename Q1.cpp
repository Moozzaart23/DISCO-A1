
#include<bits/stdc++.h>

void calc(int a[],int k)
{
	
	int n=k;
	int p=1;double s;
	for(int i=0;i<=k;i++)
	{
		p=p*(a[i]+1);
	
	}
	for(int j=0;j<=n;j++)
	{
		
		s=s+(double(a[j])/(a[j]+1));
		//printf("\n %.2lf ",s);
		
	}
	printf("\n %lf ",s*p);
}
void primeFactors(int n) 
{ 

	int a[100]={0};
	
	while (n%2 == 0) 
	{ 
		//printf("%d ", 2);
		 a[0]++;
		n = n/2; 
	} 
	
	int k=1;
	
	for (int i = 3; i <= sqrt(n);  i++) 
	{ 
		
		while (n%i == 0) 
		{ 
			//printf("%d ", i); 
			a[k]++;
			n = n/i; 
		}
		 
		  k++;
	} 

	
	if (n > 2) 
	{
		//printf ("%d ", n); 
		a[k]++;
	}
	
	
	calc(a,k);
} 


int main() 
{ 

	int n;
	scanf("%d",&n);
	primeFactors(n); 

	
	return 0; 
} 

